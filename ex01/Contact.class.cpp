/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 19:22:00 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/02/19 17:16:21 by vfuhlenb         ###   ########.fr       */
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

void	Contact::bar( void ) {
	std::cout << "Member function called" << std::endl;
	return;
}
