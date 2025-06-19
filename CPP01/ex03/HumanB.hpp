/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamerlin <mamerlin@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 17:05:23 by mamerlin          #+#    #+#             */
/*   Updated: 2025/06/19 17:28:46 by mamerlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {

	private:
		std::string _name;
		Weapon &_weapon;

	public:
		HumanB(std::string name);
		void setWeapon(Weapon &wepon);
		void attack();
};

#endif
