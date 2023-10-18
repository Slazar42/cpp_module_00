/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:24:15 by slazar            #+#    #+#             */
/*   Updated: 2023/10/18 20:01:09 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>
#include <string>
#include <stdlib.h>

class PhoneBook
{
    Contact Contacts[8];
    unsigned int capacity;
    public :
        PhoneBook();
        ~PhoneBook();
        void Prompte();
        std::string Get_10_char(std::string str);
        void ADD();
        void SEARCH();
        void EXIT();
};

#endif