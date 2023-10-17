/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:24:15 by slazar            #+#    #+#             */
/*   Updated: 2023/10/17 18:10:19 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include<iostream>
#include<string>

class PhoneBook
{
    private :
        Contact Contacts[8];
        long capacity = 0;
    public :
        PhoneBook();
        ~PhoneBook();
        void Prompte();
        void ADD();
        void SEARCH(int i);
        void EXIT();
};






#endif