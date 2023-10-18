/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:54:05 by slazar            #+#    #+#             */
/*   Updated: 2023/10/18 16:45:22 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook()
{
    std::cout<<"welcome to PhoneBook Software\n";
    capacity = 0;
}

PhoneBook::~PhoneBook()
{
    std::cout<<"See you soon, Good bye !!\n";
}

void PhoneBook::Prompte()
{
    std::string command;

    std::cout<<"Enter one of the following commands ADD or SEARCH or EXIT.\n";
    std::getline(std::cin, command);
    if(command == "ADD")
        ADD();
    else if(command == "SEARCH")
        SEARCH();
    else if(command == "EXIT")
        EXIT();
    else
        Prompte();
}

void PhoneBook::ADD()
{
    std::string str;

    if (capacity > 7)
        std::cout<<"Warning !! Your contact "<<Contacts[capacity%8].get_fn()
            <<"will be lost for ever !!\n";

    while (str == "" )
    {
        std::cout<<"Enter the first name :\n";
        std::getline(std::cin, str);
        Contacts[capacity%8].set_fn(str);
    }

    str = "";
    while (str == "" )
    {
        std::cout<<"Enter the last name :\n";
        std::getline(std::cin, str);
        Contacts[capacity%8].set_ln(str);
    }

    str = "";
    while (str == "" )
    {
        std::cout<<"Enter the nick name:\n";
        std::getline(std::cin, str);
        Contacts[capacity%8].set_nn(str);
    }

    str = "";
    while (str == "" )
    {
        std::cout<<"Enter the phone number :\n";
        std::getline(std::cin, str);
        Contacts[capacity%8].set_ph(str);
    }

    str = "";
    while (str == "" )
    {
        std::cout<<"Enter the darkest secret :\n";
        std::getline(std::cin, str);
        Contacts[capacity%8].set_ds(str);
    }

    std::cout<<"Contact added successfully !!\n";
    capacity += 1;
    Prompte();
}
std::string PhoneBook::Get_10_char(std::string str)
{
    if(str.length() <= 10)
        return str;
    else
    {
        std::string s = str.substr(0,9);
        s[9] = '.';
        return s;
    }
}

void PhoneBook::SEARCH()
{
    std::string index;

	std::cout << " ___________________________________________ \n";
	std::cout << "|     Index|First Name| Last Name|  Nickname|\n";
	std::cout << "|----------|----------|----------|----------|\n";
    for(unsigned int i = 0 ;i <capacity && i < 8;i++)
    {
        std::cout << "|" << std::setw(10) << i+1 << "|"
        << std::setw(10) << Get_10_char(Contacts[i].get_fn()) << "|"
        << std::setw(10) << Get_10_char(Contacts[i].get_ln()) << "|"
        << std::setw(10) << Get_10_char(Contacts[i].get_ln()) << "|\n";
    }
	std::cout << " ___________________________________________ \n";
    
    while (1)
    {
        
        std::cout << "Enter the index :\n";
        std::getline(std::cin, index);
        if ((index[0] >= '1' && index[0] <= '9' 
            && index.length() == 1))
                break;
        else if(index == "EXIT")
            EXIT();
    }
    Prompte();
}

void PhoneBook::EXIT()
{
    exit(0);
}