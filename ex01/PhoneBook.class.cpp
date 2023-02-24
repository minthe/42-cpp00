/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 19:22:02 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/02/24 18:28:58 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) {
	return;
}

PhoneBook::~PhoneBook(void) {
	return;
}

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

void	PhoneBook::add_contact(int index) {
	_contact_data[index].setFirstName();
	_contact_data[index].setLastName();
	// _contact_data[index].setNickName();
	// _contact_data[index].setPhone();
	// _contact_data[index].setSecret();
	std::cout << "~ Contact added succesfully." << std::endl;
	return;
}

void	PhoneBook::readme(void) {
	std::cout
		<< std::endl
		<< "~ Welcome to your little PhoneBook ~" << std::endl
		<< std::endl << "You have three options:" << std::endl
		<< "\t\"ADD\" adds a new contact." << std::endl
		<< "\t\"SEARCH\" displays your contacts." << std::endl
		<< "\t\"EXIT\" exits the program." << std::endl
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
}

void	PhoneBook::print_contact_row(int index) const {

	std::cout
		<< "|"
		<< std::setw(10) << index
		<< "|"
		<< std::setw(9) << this->_contact_data[index].getFirstName()
		<< "."
	<< std::endl;
}
