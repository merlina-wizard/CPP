/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamerlin <mamerlin@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 12:03:08 by mamerlin          #+#    #+#             */
/*   Updated: 2025/06/19 12:13:55 by mamerlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->_nContacts = 0;
}

PhoneBook::~PhoneBook(){}

std::string PhoneBook::truncate(const std::string& str, size_t width) const
{
    if (str.length() > width)
        return str.substr(0, width - 1) + ".";
    return str;
}

std::string PhoneBook::getValidInput(const std::string& prompt) const
{
    std::string input;

    while (true)
    {
        std::cout << prompt;
        std::getline(std::cin, input);

        if (std::cin.eof())
        {
            std::cout << std::endl;
            return "";
        }

        size_t start = input.find_first_not_of(" \t");
        if (start == std::string::npos)
        {
            std::cout << "Field cannot be empty. Please try again." << std::endl;
            continue;
        }

        size_t end = input.find_last_not_of(" \t");
        input = input.substr(start, end - start + 1);

        if (!input.empty())
            break;

        std::cout << "Field cannot be empty. Please try again." << std::endl;
    }

    return input;
}

void PhoneBook::add()
{
    Contact contact;
    std::string input;

    input = getValidInput("Insert First Name: ");
    if (input.empty()) return;
    contact.setFirstName(input);

    input = getValidInput("Insert Last Name: ");
    if (input.empty()) return;
    contact.setLastName(input);

    input = getValidInput("Insert Nickname: ");
    if (input.empty()) return;
    contact.setNickName(input);

    input = getValidInput("Insert Phone Number: ");
    if (input.empty()) return;
    contact.setPhoneNumber(input);

    input = getValidInput("Insert Secret: ");
    if (input.empty()) return;
    contact.setSecret(input);

    if (this->_nContacts < 8)
    {
        for (int i = this->_nContacts; i > 0; i--)
            this->_contacts[i] = this->_contacts[i - 1];
        this->_nContacts++;
    }
    else
    {
        for (int i = 7; i > 0; i--)
            this->_contacts[i] = this->_contacts[i - 1];
    }
    this->_contacts[0] = contact;

    std::cout << "Ora hai un amico in più!" << std::endl;
}

void PhoneBook::search() const
{
    int index = -1;

    if (this->_nContacts == 0)
    {
        std::cout << "No Contacts." << std::endl;
        return;
    }

    std::cout << std::right << std::setfill(' ')
        << std::setw(10) << "Index" << " | "
        << std::setw(10) << "First Name" << " | "
        << std::setw(10) << "Last Name" << " | "
        << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < this->_nContacts; i++)
    {
        std::cout << std::right << std::setfill(' ')
            << std::setw(10) << i << " | "  // ✅ Direct int printing (C++98)
            << std::setw(10) << truncate(this->_contacts[i].getFirstName(), 10) << " | "
            << std::setw(10) << truncate(this->_contacts[i].getLastName(), 10) << " | "
            << std::setw(10) << truncate(this->_contacts[i].getNickName(), 10) << std::endl;
    }

    std::cout << "Digita l'index del contatto che vuoi visualizzare: ";
    std::cin >> index;

    while (index < 0 || index >= this->_nContacts)
    {
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        std::cout << "Invalid index. Please enter a number between 0 and "
                  << this->_nContacts - 1 << ": ";
        std::cin >> index;
    }

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "\n--- Contact Details ---" << std::endl;
    std::cout << "First Name: " << this->_contacts[index].getFirstName() << std::endl;
    std::cout << "Last Name: " << this->_contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << this->_contacts[index].getNickName() << std::endl;
    std::cout << "Phone Number: " << this->_contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Secret: " << this->_contacts[index].getSecret() << std::endl;
}
