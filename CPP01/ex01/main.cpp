/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamerlin <mamerlin@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 16:40:06 by mamerlin          #+#    #+#             */
/*   Updated: 2025/06/19 16:41:31 by mamerlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie* horde = zombieHorde(5, "AHHHHH");

	for (int i = 0; i < 5; i++)
		horde[i].announcement();
	delete[] horde;
	return 0;
}
