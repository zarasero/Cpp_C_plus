/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 19:45:19 by zserobia          #+#    #+#             */
/*   Updated: 2025/03/03 21:04:44 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
class WrongAnimal {
protected:
    std::string type;
public:
    WrongAnimal();
    virtual ~WrongAnimal();
    std::string getType() const;
    void makeSound() const;
    WrongAnimal &operator=(const WrongAnimal &other);
    WrongAnimal(const WrongAnimal &other);
};

#endif