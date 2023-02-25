/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:19:40 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/02/25 21:46:02 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

int	main() {

	PhoneBook	phonebook;
	std::string	input;
	int			index = 0;

	phonebook.print_welcome_message();
	phonebook.print_options();

	while (!std::cin.eof() && input.compare("EXIT") != 0)
	{
		std::getline(std::cin, input);

		if (input.compare("ADD") == 0)
		{
			phonebook.add_contact(index);
			if (!std::cin.eof())
				phonebook.print_success_message(index);
			index++;
		}
		else if (input.compare("SEARCH") == 0)
			phonebook.search_contacts();
		else if (!std::cin.eof() && input.compare("EXIT") != 0)
			phonebook.print_options();
		if (index == 8)
			index = 0;
	}
	phonebook.print_exit_message();
	return 0;
}
