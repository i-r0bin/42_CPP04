/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rilliano <rilliano@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 19:39:16 by rilliano          #+#    #+#             */
/*   Updated: 2024/12/18 20:50:00 by rilliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure") {}

Cure::Cure(Cure const & other) : AMateria(other) {}

Cure& Cure::operator=(Cure const & other) {
    if (this != &other) {
        AMateria::operator=(other);
    }
    return *this;
}

Cure::~Cure() {}

AMateria* Cure::clone() const {
    return new Cure(*this);
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
