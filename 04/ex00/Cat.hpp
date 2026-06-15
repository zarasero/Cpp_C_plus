/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 19:44:17 by zserobia          #+#    #+#             */
/*   Updated: 2025/03/03 20:04:59 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal {
public:
    Cat();
    ~Cat();
    Cat(const Cat &other);
    Cat &operator=(const Cat &other);
    void makeSound() const;
};

#endif
