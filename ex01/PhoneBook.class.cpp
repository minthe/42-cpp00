/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 19:22:02 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/02/26 14:11:41 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) : _number(0) {}
PhoneBook::~PhoneBook(void) {}

// ADD ---------------------------------------------------------------- ADD

void	PhoneBook::add_contact(int index)
{
	if (!std::cin.eof())
		this->_add_first_name(index);
	if (!std::cin.eof())
		this->_add_last_name(index);
	if (!std::cin.eof())
		this->_add_nickname(index);
	if (!std::cin.eof())
		this->_add_phone(index);
	if (!std::cin.eof())
		this->_add_secret(index);
	return;
}

void	PhoneBook::_add_first_name(int index)
{
	this->_print_text("first name:", _COLOR_STD);
	if (!_contact_data[index].setFirstName() && !(std::cin.eof()))
	{
		this->print_invalid_message();
		this->_add_first_name(index);
	}
	return;
}

void	PhoneBook::_add_last_name(int index)
{
	this->_print_text("last name:", _COLOR_STD);
	if (!_contact_data[index].setLastName() && !(std::cin.eof()))
	{
		this->print_invalid_message();
		this->_add_last_name(index);
	}
	return;
}

void	PhoneBook::_add_nickname(int index)
{
	this->_print_text("nickname:", _COLOR_STD);
	if (!_contact_data[index].setNickName() && !(std::cin.eof()))
	{
		this->print_invalid_message();
		this->_add_nickname(index);
	}
	return;
}

void	PhoneBook::_add_phone(int index)
{
	this->_print_text("phone number:", _COLOR_STD);
	if (!_contact_data[index].setPhone() && !(std::cin.eof()))
	{
		this->print_invalid_message();
		this->_add_phone(index);
	}
	return;
}

void	PhoneBook::_add_secret(int index)
{
	this->_print_text("darkest secret:", _COLOR_STD);
	if (!_contact_data[index].setSecret() && !(std::cin.eof()))
	{
		this->print_invalid_message();
		this->_add_secret(index);
	}
	return;
}

// SEARCH ---------------------------------------------------------------- SEARCH

int	PhoneBook::search_contacts(void)
{
	this->_print_contact_list_header();
	if (this->_contact_data[0].getFirstName().compare("") != 0)
		this->_select_contact();
	else
		this->_print_text("\nEmpty List. Use ADD to save your first Contact...", _COLOR_STD);
	return (0);
}

int	PhoneBook::_select_contact()
{
	std::string input;
	char		*inval;
	
	this->_print_text("\nEnter index to show contact details...", _COLOR_STD);
	std::getline(std::cin, input);
	if (std::cin.eof())
		return (0);
	if (input.empty())
	{
		this->_print_text("Not a valid input (enter a digit between 0-7)", _COLOR_WARNING);
		return (this->search_contacts());
	}
	this->_number = (int)strtol(input.c_str(), &inval, 10);
	if (this->_number > -1 && this->_number < 8 && !*inval)
	{
		this->_number = std::stoi(input);
		if (this->_number >= 0 && this->_number < 8 && !std::cin.eof() && (this->_contact_data[this->_number].getFirstName().compare("") != 0))
		{
			this->_print_contact(this->_number);
			return (0);
		}
		else
		{
			this->_print_text("Not available (choose a green index number)", _COLOR_WARNING);
			return (this->search_contacts());
		}
	}
	this->_print_text("Not a valid input (enter a digit between 0-7)", _COLOR_WARNING);
	return (this->search_contacts());
}

void	PhoneBook::_print_contact(int index) const
{
	std::cout
		<< _COLOR_STD
		<< "first name: " + _contact_data[index].getFirstName() << std::endl
		<< "last name: " + _contact_data[index].getLastName() << std::endl
		<< "nickname: " + _contact_data[index].getNickName() << std::endl
		<< "phone number: " + _contact_data[index].getPhone() << std::endl
		<< "darkest secret: " + _contact_data[index].getSecret() << std::endl
		<< _COLOR_RESET
	<< std::endl;
	return;
}

void	PhoneBook::_print_contact_list_header()
{
	this->_print_text("\nContact List\n", _COLOR_STD);
	std::cout
		<< _COLOR_STD
		<< "|"
		<< std::setw(10) << "index"
		<< "|"
		<< std::setw(10) << "first name"
		<< "|"
		<< std::setw(10) << "last name"
		<< "|"
		<< std::setw(10) << "nickname"
		<< "|"
		<< _COLOR_RESET
	<< std::endl;
	for (int index = 0; index < 8; index++)
		this->_print_contact_list(index);
	return;
}

void	PhoneBook::_print_contact_list(int index)
{
	std::cout
		<< _COLOR_STD
	<< "|";
	if (this->_contact_data[index].getFirstName().compare("") != 0)
		std::cout << _COLOR_RESET << _COLOR_SUCCESS << std::setw(10) << index << _COLOR_RESET << _COLOR_STD;
	else
		std::cout << std::setw(10) << index;
	std::cout << "|";
	std::cout << std::setw(10) << this->_conform_value(this->_contact_data[index].getFirstName()) << "|";
	std::cout << std::setw(10) << this->_conform_value(this->_contact_data[index].getLastName()) << "|";
	std::cout << std::setw(10) << this->_conform_value(this->_contact_data[index].getNickName()) << "|";
	std::cout << _COLOR_RESET << std::endl;
	return;
}

// UTILS ---------------------------------------------------------------- UTILS

void	PhoneBook::print_welcome_message(void) const
{
	std::cout
		<< _COLOR_STD
		<< "\nPHONEBOOK "
		<< _COLOR_RESET
		<< _COLOR_STD
		<< "(Rev"
		<< _REVISION
		<< ")\n"
		<< _COLOR_RESET
	<< std::endl;
	return;
}

void	PhoneBook::print_invalid_message(void) const
{
	this->_print_text("enter a value...", _COLOR_WARNING);
}

void	PhoneBook::print_success_message(int index) const
{
	std::cout
		<< "\033[32;1m" << "Contact #"
		<< index
		<< " added successfully" << "\033[0m"
	<< std::endl;
	return;
}

void	PhoneBook::print_options(void) const
{
	this->_print_text("available commands: ADD, SEARCH, EXIT", _COLOR_STD);
}

void	PhoneBook::print_exit_message(void) const
{
	this->_print_text("PhoneBook closed", _COLOR_WARNING);
}

std::string	PhoneBook::_conform_value(std::string str)
{
	if (str.length() > (size_t)10)
		return (str.substr(0,9).append("."));
	return (str);
}

void	PhoneBook::_print_text(std::string str, std::string color) const
{
	std::cout
		<< color
		<< str
		<< _COLOR_RESET
	<< std::endl;
	return;
}

const short	PhoneBook::_REVISION = 1;
const std::string PhoneBook::_COLOR_STD = "\033[97;1m";
const std::string PhoneBook::_COLOR_WARNING = "\033[31;1m";
const std::string PhoneBook::_COLOR_SUCCESS = "\033[92;1m";
const std::string PhoneBook::_COLOR_RESET = "\033[0m";
