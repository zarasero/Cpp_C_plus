/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:06:24 by zserobia          #+#    #+#             */
/*   Updated: 2025/02/11 16:07:18 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>  // Добавьте этот заголовок для работы с std::string

class Contact
{
private:
    std::string f_name;
    std::string l_name;
    std::string n_name;
    std::string pnumber;
    std::string dark;

public:
    Contact();
    ~Contact();

    void setFname(std::string info);
    void setLname(std::string info);
    void setNname(std::string info);
    void setPnumber(std::string info);
    void setDSecret(std::string info);

    std::string getFname();
    std::string getLname();
    std::string getNname();
    std::string getPnumber();
    std::string getDSecret();
};

#endif
