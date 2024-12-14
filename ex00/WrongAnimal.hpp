/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rilliano <rilliano@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 20:16:24 by rilliano          #+#    #+#             */
/*   Updated: 2024/12/14 20:24:56 by rilliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {

protected:
    std::string type;

public:
    WrongAnimal();
    virtual ~WrongAnimal();
    std::string getType() const;
    void makeSound() const;

};

#endif
