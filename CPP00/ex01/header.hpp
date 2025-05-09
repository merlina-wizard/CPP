#pragma once
#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <array>
#include <fstream>
#include <cstdlib>

class Contact {
	private:
		std::string first_name;
		std::string last_name;
		std::string phone_number;
	public:
		void set_firstname(const std::string&);
		std::string get_firstname() const;

		void set_last_name(const std::string&);
		std::string get_last_name() const;

		void set_phone_number(const std::string&);
		std::string get_phone_number() const;
};

class PhoneBook {
	private:
		std::array<Contact, 8> contacts;
		int index;
		int track;
	public:
		PhoneBook() : index(0), track(0){}
		void add_contact(const Contact&);
		void display_contacts() const;
};

std::string get_valid_input(const std::string& prompt);
std::string get_valid_number(const std::string& prompt);

#endif
