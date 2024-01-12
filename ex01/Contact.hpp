/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:35:15 by slazar            #+#    #+#             */
/*   Updated: 2023/10/19 13:23:46 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include<string>
#include<iostream>

class Contact
{
    private :
        std::string f_name;
        std::string l_name;
        std::string n_name;
        std::string ph;
        std::string d_s;
    public :
        void set_fn(std::string f);
        void set_ln(std::string l);
        void set_ph(std::string p);
        void set_nn(std::string n);
        void set_ds(std::string ds);
        std::string get_fn();
        std::string get_ln();
        std::string get_ph();
        std::string get_nn();
        std::string get_ds();
};
#endif