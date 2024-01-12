/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:41:17 by slazar            #+#    #+#             */
/*   Updated: 2024/01/12 18:31:07 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    std::cout<<"\033[32mWelcome to PhoneBook Software !!\033[0m\n";
    capacity = 0;
}

void PhoneBook::Prompte()
{
    std::string command;

    std::cout<<"Enter one of the following commands \033[33mADD\033[0m or \033[33mSEARCH\033[0m or \033[33mEXIT\033[0m.\n";
    std::getline(std::cin, command);
	
    if(command == "ADD")
        ADD();
    else if(command == "SEARCH")
        SEARCH();
    else if(command == "EXIT" || std::cin.eof())
        EXIT();
    else
        Prompte();
}

void PhoneBook::ADD()
{
    std::string str;

    if (capacity > 7)
        std::cout<<"\033[31mWarning\033[0m !! Your contact \033[31m"<<Contacts[capacity%8].get_fn()
            <<" \033[0mwill be lost for ever !!\n";
    while (str == "" )
    {
        std::cout<<"Enter the first name :\n";
        std::getline(std::cin, str);
		if(std::cin.eof())
			EXIT();
        Contacts[capacity%8].set_fn(str);
    }
    str = "";
    while (str == "" )
    {
        std::cout<<"Enter the last name :\n";
        std::getline(std::cin, str);
		if(std::cin.eof())
			EXIT();
        Contacts[capacity%8].set_ln(str);
    }

    str = "";
    while (str == "" )
    {
        std::cout<<"Enter the nick name :\n";
        std::getline(std::cin, str);
		if(std::cin.eof())
			EXIT();
        Contacts[capacity%8].set_nn(str);
    }

    str = "";
    while (str == "" )
    {
        std::cout<<"Enter the phone number :\n";
        std::getline(std::cin, str);
		if(std::cin.eof())
			EXIT();
        Contacts[capacity%8].set_ph(str);
    }

    str = "";
    while (str == "" )
    {
        std::cout<<"Enter the darkest secret :\n";
        std::getline(std::cin, str);
        Contacts[capacity%8].set_ds(str);
    }

    std::cout<<"\033[32mContact added successfully !!\033[0m\n";
    capacity += 1;
    Prompte();
}

std::string PhoneBook::Get_10_char(std::string str)
{
    if(str.length() <= 10)
        return str;
    std::string s = str.substr(0,9) + ".";
    return s;
}

void PhoneBook::SEARCH()
{
    std::string index;
    unsigned int i = 0;

	std::cout << " ___________________________________________ \n";
	std::cout << "|     \033[35mIndex\033[0m|First Name| Last Name|  Nickname|\n";
	std::cout << "|----------|----------|----------|----------|\n";
    for(;i <capacity && i < 8;i++)
    {
        std::cout << "|\033[35m" << std::setw(10) << i+1 << "\033[0m|";
        std::cout << std::setw(10) << Get_10_char(Contacts[i].get_fn()) << "|";
        std::cout << std::setw(10) << Get_10_char(Contacts[i].get_ln()) << "|";
        std::cout << std::setw(10) << Get_10_char(Contacts[i].get_nn()) << "|\n";
    }
	std::cout << " ___________________________________________ \n";

    while (capacity)
    {
        std::cout << "Enter the \033[35mindex\033[0m :\n";
        std::getline(std::cin, index);
		if (std::cin.eof())
			EXIT();
        if (capacity < 8)
            i = capacity;
        else
            i = 8;
        if (capacity && (index.length() != 1 || index[0] < '1' || index[0] > '8' || (unsigned int) index[0] > capacity+48))
            std::cout << "\033[31mInvalid index !!\033[0m try between \033[35m1 & " << i << "\033[0m\n";
        else if ((index[0] >= '1' && index[0] <= '8' && index.length() == 1)
                && (unsigned int) index[0] - 48 <= capacity)
                    break;
    }
    if(capacity)
    {
        std::cout<< "First Name : "<<Contacts[index[0] - '1'].get_fn()<<std::endl;
        std::cout<< "Last Name : "<<Contacts[index[0] - '1'].get_ln()<<std::endl;
        std::cout<< "Nick Name : "<<Contacts[index[0] - '1'].get_nn()<<std::endl;
        std::cout<< "Phone Number : "<<Contacts[index[0] - '1'].get_ph()<<std::endl;
        std::cout<< "Darkest Secret : "<<Contacts[index[0] - '1'].get_ds()<<std::endl;
    }
    Prompte();
}

void PhoneBook::EXIT()
{
	std::cout<<"\033[32mSee you soon, Good bye !!\n";
    exit(0);
}