#include "header.hpp"

void Contact::set_firstname(const std::string& first_name){
	this->first_name = first_name;
}

void Contact::set_last_name(const std::string& last_name){
	this->last_name = last_name;
}

void Contact::set_phone_number(const std::string& phone_number){
	this->phone_number = phone_number;
}

std::string Contact::get_firstname() const {
	return this->first_name;
}

std::string Contact::get_last_name() const {
	return this->last_name;
}

std::string Contact::get_phone_number() const {
	return this->phone_number;
}

void Phonebook::add_contact(const Contact& new_contact){
	
}
