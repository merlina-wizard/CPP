/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamerlin <mamerlin@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:38:16 by mamerlin          #+#    #+#             */
/*   Updated: 2025/06/19 16:39:08 by mamerlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name) {

	if (n < 0)
		return NULL;

	Zombie *horde = new Zombie[n];

	for (int i = 0; i < n; i++)
		horde[i].setName(name);
	return horde;
}
