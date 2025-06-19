/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamerlin <mamerlin@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:38:28 by mamerlin          #+#    #+#             */
/*   Updated: 2025/06/19 16:37:57 by mamerlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("Alcolista Anonimo") {}

Zombie::Zombie(std::string name) : _name(name){}

Zombie::~Zombie(){
	std::cout << _name << ": MORTO...un non morto...vb" << std::endl;
}

void Zombie::announcement( void ) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	_name = name;
}
