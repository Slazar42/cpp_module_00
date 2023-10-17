/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:54:05 by slazar            #+#    #+#             */
/*   Updated: 2023/10/17 18:09:42 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    std::cout<<"welcome to PhoneBook Software\n";
}
PhoneBook::~PhoneBook()
{
    std::cout<<"See you soon, Good bye !!\n";
}
void PhoneBook::Prompte()
{
    std::string command;
    std::cout<<"Enter one of the following commands ADD or SEARCH or EXIT."
    std::cin>>command;
    if(command == "ADD")
        PhoneBook::ADD();
    else if(command == "SEARCH")
        PhoneBook::SEARCH();
    else if(command == "EXIT")
        PhoneBook::EXIT();
    else
        PhoneBook::prompte();
}
void PhoneBook::ADD()
{
    capacity += 1;
    
    std::cout<<"Contact added successfully !!\n";
}
void PhoneBook::SEARCH(std::int i)
{
    
}
void PhoneBook::EXIT()
{
    exit(0);
}