/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 20:06:19 by zserobia          #+#    #+#             */
/*   Updated: 2025/03/03 20:49:10 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    public:
        Brain();
        ~Brain();
        Brain(const Brain &other);
        Brain& operator=(const Brain& other);
        void setIdea(int index, const std::string& idea);
        std::string getIdea(int index) const;
    private:
        std::string ideas[100];
};

#endif
