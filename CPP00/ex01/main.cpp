/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamerlin <mamerlin@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 12:03:40 by mamerlin          #+#    #+#             */
/*   Updated: 2025/06/19 12:12:53 by mamerlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook phoneBook;
	std::string command;

	std::cout << "Tiè! Ecco a te un'agenta dei contatti...anni 90.." << std::endl;
	std::cout << "I comandi disponibili sono: ADD, SEARCH, EXIT" << std::endl;

	while (true)
	{
		std::cout << "\nInserisci il comando: ";
		std::getline(std::cin, command);

		if (std::cin.eof())
		{
			std::cout << std::endl << "Daje Roma Daje!" << std::endl;
			break;
		}
		if (command == "ADD")
		{
			phoneBook.add();
		}
		else if (command == "SEARCH")
		{
			phoneBook.search();
		}
		else if (command == "EXIT")
		{
			std::cout << "Goodbye!" << std::endl;
			return 0;
		}
		else if (!command.empty())
		{
			std::cout << "NOOOO A TONNO TE LI HO DETTI I COMANDI GIUSTI!" << std::endl;
			std::cout << "I comandi DISPONIBILI sono: ADD, SEARCH, EXIT" << std::endl;
		}
	}

	return 0;
}
