/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 19:22:02 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/02/24 12:11:48 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) {
	return;
}

PhoneBook::~PhoneBook(void) {
	return;
}

void	PhoneBook::getContact(int index) const {
	std::cout
		<< _contact_data[index].getFirstName() << std::endl
		<< _contact_data[index].getLastName() << std::endl
		<< _contact_data[index].getNickName() << std::endl
		<< _contact_data[index].getPhone() << std::endl
		<< _contact_data[index].getSecret()
	<< std::endl;
}
