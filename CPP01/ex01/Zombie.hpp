/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamerlin <mamerlin@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 15:38:31 by mamerlin          #+#    #+#             */
/*   Updated: 2025/06/19 16:37:44 by mamerlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
	private:
		std::string _name;

	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void announcement( void );
		void setName(std::string name);
};

Zombie *newZombie(std::string name);
Zombie* zombieHorde( int N, std::string name );
void randomChump(std::string name);


#endif
