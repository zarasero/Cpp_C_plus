/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 19:44:28 by zserobia          #+#    #+#             */
/*   Updated: 2025/03/03 20:54:48 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {
public:
    Dog();
    ~Dog();
    Dog(const Dog &other);
    Dog &operator=(const Dog &other);
    void makeSound() const;
    void setBrainIdea(int index, const std::string& idea);
    std::string getBrainIdea(int index) const;
private:
    Brain* brain;
};

#endif