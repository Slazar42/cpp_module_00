/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:00:59 by slazar            #+#    #+#             */
/*   Updated: 2023/10/18 15:35:01 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::set_fn(std::string f)
{
    f_name = f;
}
void Contact::set_ln(std::string l)
{
    l_name = l;
}
void Contact::set_ph(std::string p)
{
    ph = p;
}
void Contact::set_nn(std::string n)
{
    n_name = n;
}
void Contact::set_ds(std::string ds)
{
    d_s = ds;
}
std::string Contact::get_fn()
{
    return f_name;
}
std::string Contact::get_ln()
{
    return l_name;
}
std::string Contact::get_ph()
{
    return ph;
}
std::string Contact::get_nn()
{
    return n_name;
}
std::string Contact::get_ds()
{
    return d_s;
}