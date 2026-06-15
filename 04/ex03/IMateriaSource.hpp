/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <zserobia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 15:02:27 by zserobia          #+#    #+#             */
/*   Updated: 2025/04/01 15:02:39 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// IMateriaSource.hpp
#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource {
public:
    virtual ~IMateriaSource() {} // Виртуальный деструктор
    virtual void learnMateria(AMateria* m) = 0; // Чисто виртуальная функция для обучения Materia
    virtual AMateria* createMateria(std::string const & type) = 0; // Чисто виртуальная функция создания Materia
};

#endif // IMATERIASOURCE_HPP

