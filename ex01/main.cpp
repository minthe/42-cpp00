/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:19:40 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/02/19 17:15:40 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

int	main() {

	Contact	new_contact;

	new_contact.foo = 42;
	std::cout << "new_contact.foo: " << new_contact.foo << std::endl;
	new_contact.bar();

	return 0;
}
