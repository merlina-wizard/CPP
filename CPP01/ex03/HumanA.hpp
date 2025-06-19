/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamerlin <mamerlin@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 17:05:23 by mamerlin          #+#    #+#             */
/*   Updated: 2025/06/19 17:27:59 by mamerlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {

	private:
		std::string _name;
		Weapon &_weapon;

	public:
		HumanA(std::string name, Weapon &weapon);
		void attack();
};




#endif
