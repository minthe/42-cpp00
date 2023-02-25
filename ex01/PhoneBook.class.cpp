/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 19:22:02 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/02/25 16:55:35 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) {}
PhoneBook::~PhoneBook(void) {}

// ADD

void	PhoneBook::add_contact(int index) {
	if (!std::cin.eof())
		this->add_first_name(index);
	if (!std::cin.eof())
		this->add_last_name(index);
	return;
}

void	PhoneBook::add_first_name(int index) {
	this->print_text("first name:", _COLOR_STD);
	if (!_contact_data[index].setFirstName() && !(std::cin.eof()))
	{
		this->print_invalid_message();
		this->add_first_name(index);
	}
	return;
}

void	PhoneBook::add_last_name(int index) {
	this->print_text("last name:", _COLOR_STD);
	if (!_contact_data[index].setLastName() && !(std::cin.eof()))
	{
		this->print_invalid_message();
		this->add_last_name(index);
	}
	return;
}

void	PhoneBook::add_nickname(int index) {
	this->print_text("last name:", _COLOR_STD);
	if (!_contact_data[index].setNickName() && !(std::cin.eof()))
	{
		this->print_invalid_message();
		this->add_nickname(index);
	}
	return;
}

void	PhoneBook::add_phone(int index) {
	this->print_text("last name:", _COLOR_STD);
	if (!_contact_data[index].setPhone() && !(std::cin.eof()))
	{
		this->print_invalid_message();
		this->add_phone(index);
	}
	return;
}

void	PhoneBook::add_secret(int index) {
	this->print_text("last name:", _COLOR_STD);
	if (!_contact_data[index].setSecret() && !(std::cin.eof()))
	{
		this->print_invalid_message();
		this->add_secret(index);
	}
	return;
}

// SEARCH

void	PhoneBook::print_contact(int index) const {
	std::cout
		<< _contact_data[index].getFirstName() << std::endl
		<< _contact_data[index].getLastName() << std::endl
		<< _contact_data[index].getNickName() << std::endl
		<< _contact_data[index].getPhone() << std::endl
		<< _contact_data[index].getSecret()
	<< std::endl;
	return;
}

void	PhoneBook::search_contact(void) {
	int	index = 0;

	while (index < 8)
	{
		this->print_contact_row(index);
		index++;
	}
	
	// this->print_contact(index);
	return;
}

void	PhoneBook::print_contact_row(int index) const {

	std::cout
		<< "|"
		<< std::setw(10) << index
		<< "|"
		<< std::setw(9) << this->_contact_data[index].getFirstName()
		<< "."
	<< std::endl;
	return;
}

// Utilities

void	PhoneBook::print_text(std::string str, std::string color) const {
	std::cout
		<< color
		<< str
		<< "\033[0m"
	<< std::endl;
	return;
}

void	PhoneBook::welcome_message(void) const {
	std::cout
		<< "\n\033[36;1m"
		<< "PhoneBook "
		<< "\033[0m"
		<< "\033[36m(Rev"
		<< _REVISION
		<< ")"
		<< "\033[0m"
	<< std::endl;
	return;
}

void	PhoneBook::print_invalid_message(void) const {
	this->print_text("enter a value...", _COLOR_WARNING);
}

void	PhoneBook::print_success_message(int index) const {
	std::cout
		<< "\033[32;1m" << "Contact #"
		<< index
		<< " added successfully" << "\033[0m"
	<< std::endl;
	return;
}

void	PhoneBook::print_options(void) const {
	this->print_text("available commands: ADD, SEARCH, EXIT", "\033[36m");
}

void	PhoneBook::print_exit_message(void) const {
	this->print_text("PhoneBook closed", _COLOR_WARNING);
}

// Static NonMember Attributes

const short	PhoneBook::_REVISION = 1;
const std::string PhoneBook::_COLOR_STD = "\033[36;1m";
const std::string PhoneBook::_COLOR_WARNING = "\033[31;1m";
const std::string PhoneBook::_COLOR_SUCCESS = "\033[32;1m";
