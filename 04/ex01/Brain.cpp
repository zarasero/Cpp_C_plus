/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 20:06:09 by zserobia          #+#    #+#             */
/*   Updated: 2025/03/03 20:46:46 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain () {
    std::cout << "🧠 Brain constructor called" << std::endl;
}

Brain::~Brain () {
    std::cout << "🧠 Brain destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& other) {
    std::cout << "🧠 Brain assignment operator called" << std::endl;
    if (this != &other) {
        for (int i = 0; i < 100; i++)
            ideas[i] = other.ideas[i];
    }
    return *this;
}

Brain::Brain(const Brain& other) {
    std::cout << "🧠 Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = other.ideas[i];
}

void Brain::setIdea(int index, const std::string& idea) {
    if (index >= 0 && index < 100) {
        ideas[index] = idea;
    }
}

std::string Brain::getIdea(int index) const {
    if (index >= 0 && index < 100) {
        return ideas[index];
    }
    return "";
}

