/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamerlin <mamerlin@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 12:02:30 by mamerlin          #+#    #+#             */
/*   Updated: 2025/06/19 12:11:44 by mamerlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
private:
	int _nContacts;
	Contact _contacts[8];

	std::string truncate(const std::string& str, size_t width) const;
	std::string getValidInput(const std::string& prompt) const;

public:
	PhoneBook();
	~PhoneBook();

	void add();
	void search() const;
};

#endif
