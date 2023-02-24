/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 19:22:00 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/02/24 11:55:09 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void) {

	// std::cout << "Constructor called" << std::endl;
	return;
}

Contact::~Contact(void) {

	// std::cout << "Destructor called" << std::endl;
	return;
}

std::string	Contact::getFirstName(void) const {
	return this->_first_name;
}

std::string	Contact::getLastName(void) const {
	return this->_last_name;
}

std::string	Contact::getNickName(void) const {
	return this->_nickname;
}

std::string	Contact::getPhone(void) const {
	return this->_phone;
}

std::string	Contact::getSecret(void) const {
	return this->_secret;
}

void	Contact::setFirstName( void ){
	std::cin >> this->_first_name;
}

void	Contact::setLastName( void ){
	std::cin >> this->_last_name;
}

void	Contact::setNickName( void ){
	std::cin >> this->_nickname;
}

void	Contact::setPhone( void ){
	std::cin >> this->_phone;
}

void	Contact::setSecret( void ){
	std::cin >> this->_secret;
}
