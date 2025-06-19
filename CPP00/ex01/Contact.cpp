/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamerlin <mamerlin@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 12:02:12 by mamerlin          #+#    #+#             */
/*   Updated: 2025/06/19 12:07:18 by mamerlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){}

Contact::~Contact(){}

void Contact::setFirstName(const std::string& firstName)
{
	this->_firstName = firstName;
}

void Contact::setLastName(const std::string& lastName)
{
	this->_lastName = lastName;
}

void Contact::setNickName(const std::string& nickName)
{
	this->_nickName = nickName;
}

void Contact::setPhoneNumber(const std::string& phoneNumber)
{
	this->_phoneNumber = phoneNumber;
}

void Contact::setSecret(const std::string& secret)
{
	this->_secret = secret;
}

std::string Contact::getFirstName() const
{
	return this->_firstName;
}

std::string Contact::getLastName() const
{
	return this->_lastName;
}

std::string Contact::getNickName() const
{
	return this->_nickName;
}

std::string Contact::getPhoneNumber() const
{
	return this->_phoneNumber;
}

std::string Contact::getSecret() const
{
	return this->_secret;
}
