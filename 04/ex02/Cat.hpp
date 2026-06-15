/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 19:44:17 by zserobia          #+#    #+#             */
/*   Updated: 2025/03/03 20:51:03 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
    public:
        Cat();
        ~Cat();
        Cat(const Cat &other);
        Cat &operator=(const Cat &other);
        void makeSound() const;
        void setBrainIdea(int index, const std::string& idea);
        std::string getBrainIdea(int index) const;
    private:
        Brain* brain;
};

#endif