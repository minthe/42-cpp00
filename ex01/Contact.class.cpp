/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 19:22:00 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/02/25 16:37:37 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void) {}
Contact::~Contact(void) {}

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

bool	Contact::setFirstName(void){
	std::getline(std::cin, this->_first_name);
	if (this->_first_name.size() == 0)
		return (false);
	return (true);
}

bool	Contact::setLastName(void){
	std::getline(std::cin, this->_last_name);
	if (this->_last_name.size() == 0)
		return (false);
	return (true);
}

bool	Contact::setNickName(void){
	std::getline(std::cin, this->_nickname);
	if (this->_nickname.size() == 0)
		return (false);
	return (true);
}

bool	Contact::setPhone(void){
	std::getline(std::cin, this->_last_name);
	if (this->_last_name.size() == 0)
		return (false);
	return (true);
}

bool	Contact::setSecret(void){
	std::getline(std::cin, this->_secret);
	if (this->_secret.size() == 0)
		return (false);
	return (true);
}
