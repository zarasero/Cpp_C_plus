/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:06:46 by zserobia          #+#    #+#             */
/*   Updated: 2025/02/11 16:45:19 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"
#include <cstdlib> //clear
#include <iomanip> //setw

class Phonebook
{

    public:
        Phonebook();
        ~Phonebook();
         void createContact(int i);
         int printSingleContact(int i);
         int trouveContact(std::string i);
         int printContact(int count);
         void err();
    private:
        Contact contact[9];
};

#endif
