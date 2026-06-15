/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:06:16 by zserobia          #+#    #+#             */
/*   Updated: 2025/02/11 16:46:18 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <string>  // Добавьте этот заголовок для работы с std::string

Contact::Contact()
{

}

Contact::~Contact()
{
    
}

void Contact::setFname(std::string info)
{
    f_name = info;
}

void Contact::setLname(std::string info)
{
    l_name = info;
}

void Contact::setNname(std::string info)
{
    n_name = info;
}

void Contact::setPnumber(std::string info)
{
    pnumber = info;
}

void Contact::setDSecret(std::string info)
{
    dark = info;
}

std::string Contact::getFname()
{
    return f_name;
}

std::string Contact::getLname()
{
    return l_name;
}

std::string Contact::getNname()
{
    return n_name;
}

std::string Contact::getPnumber()
{
    return pnumber;
}

std::string Contact::getDSecret()
{
    return dark;
}
