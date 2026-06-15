/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 19:45:29 by zserobia          #+#    #+#             */
/*   Updated: 2025/03/03 21:05:00 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
public:
    WrongCat();
    ~WrongCat();
    WrongCat(const WrongCat &other);
    WrongCat &operator=(const WrongCat &other);
    void makeSound() const;
};

#endif