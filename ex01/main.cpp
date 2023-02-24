/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:19:40 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/02/24 18:24:21 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

int	main() {

	PhoneBook	phonebook;
	std::string	cmd;
	int			index = 0;

	phonebook.readme();
	while (cmd.compare("EXIT") != 0)
	{
		std::getline(std::cin, cmd);
		if (cmd.compare("ADD") == 0)
		{
			std::cout << "debug: " << index << std::endl;
			phonebook.add_contact(index);
			index++;
		}
		else if (cmd.compare("SEARCH") == 0)
			phonebook.search_contact();
		else if (cmd.size() != 0)
			std::cout << "Please enter a valid option" << std::endl;
	}
	return 0;
}
