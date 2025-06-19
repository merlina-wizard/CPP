/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamerlin <mamerlin@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 12:05:47 by mamerlin          #+#    #+#             */
/*   Updated: 2025/06/19 12:07:12 by mamerlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _secret;

public:
	Contact();
	~Contact();

	// Setters
	void setFirstName(const std::string& firstName);
	void setLastName(const std::string& lastName);
	void setNickName(const std::string& nickName);
	void setPhoneNumber(const std::string& phoneNumber);
	void setSecret(const std::string& secret);

	// Getters
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickName() const;
	std::string getPhoneNumber() const;
	std::string getSecret() const;

};

#endif
