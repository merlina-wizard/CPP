/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamerlin <mamerlin@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:46:01 by mamerlin          #+#    #+#             */
/*   Updated: 2025/06/19 15:46:27 by mamerlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Zombie.hpp"

int main()
{
	Zombie z0 = Zombie();
	Zombie z1 = Zombie("QUI");
	Zombie *z2 = new Zombie("QUO");
	Zombie *z3 = newZombie("QUA");

	z0.announcement();
	z1.announcement();
	(*z2).announcement();
	z3->announcement();

	randomChump("Zombieeeee");

	delete z2;
	delete z3;

	return 0;
}
