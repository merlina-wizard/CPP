/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamerlin <mamerlin@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 16:53:44 by mamerlin          #+#    #+#             */
/*   Updated: 2025/06/19 17:04:39 by mamerlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(std::string type) {
	_type = type;
}

void Weapon::setType(std::string type)
{
	_type = type;
}

const std::string Weapon::getType( void )
{
	return _type;
}
