/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 19:22:00 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/02/23 21:05:46 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact( void ) {

	std::cout << "Constructor called" << std::endl;
	return;
}

Contact::~Contact( void ) {

	std::cout << "Destructor called" << std::endl;
	return;
}

void	Contact::setName( void ){
	getline(std::cin, this->_name);
}

std::string	Contact::getName(void) const {
	return this->_name;
}

void	Contact::bar( void ) {
	std::cout << "Member function called" << std::endl;
	return;
}
