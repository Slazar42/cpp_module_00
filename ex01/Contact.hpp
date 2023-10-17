/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 11:35:15 by slazar            #+#    #+#             */
/*   Updated: 2023/10/17 10:18:20 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

class Contact
{
    private :
        std::string f_name;
        std::string l_name;
        std::string n_name;
        std::string d_s;
        std::string d_s;
    public :
    void set_f_n(std::string f);
    void set_l_n(std::string l);
    void set_n_n(std::string n);
    void set_ds(std::string ds);
    std::string get_f_n();
    std::string get_l_n();
    std::string get_n_n();
    std::string get_ds();
};
