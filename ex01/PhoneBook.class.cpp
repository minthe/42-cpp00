/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 19:22:02 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/02/22 14:10:24 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

PhoneBook::PhoneBook(void) : _instance_number(_instance_counter) {
	std::cout << "PhoneBook " << _instance_number << " constructor called" << std::endl;
	PhoneBook::_instance_counter += 1;
	return;
}

PhoneBook::~PhoneBook(void) {
	std::cout << "PhoneBook " << _instance_number << " deconstructor called" << std::endl;
	PhoneBook::_instance_counter -= 1;
	return;
}

void	PhoneBook::run(void) {

	std::cout << PhoneBook::_instance_number << std::endl;
	contacts[_instance_number].setName();
	std::cout << "contact: " << contacts[_instance_number].getName() << std::endl;
	return;
}

int	PhoneBook::getValue(void) const {
	return this->_instance_number;
}

int PhoneBook::_instance_counter = 1;
