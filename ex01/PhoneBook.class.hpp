/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 19:22:05 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/02/26 14:12:00 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.class.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook {

	public:

		PhoneBook();
		~PhoneBook();

		void	add_contact(int index);
		int		search_contacts();

		// Utils
		void	print_welcome_message() const;
		void	print_invalid_message() const;
		void	print_success_message(int index) const;
		void	print_options() const;
		void	print_exit_message() const;

	private:

		// ADD
		void	_add_first_name(int index);
		void	_add_last_name(int index);
		void	_add_nickname(int index);
		void	_add_phone(int index);
		void	_add_secret(int index);

		// SEARCH
		int			_select_contact();
		void		_print_contact(int index) const;
		void		_print_contact_list_header();
		void		_print_contact_list(int index);

		// UTILS
		std::string	_conform_value(std::string str);
		void		_print_text(std::string str, std::string color) const;

		Contact						_contact_data[8];
		static const short			_REVISION;
		static const std::string	_COLOR_STD;
		static const std::string	_COLOR_WARNING;
		static const std::string	_COLOR_SUCCESS;
		static const std::string	_COLOR_RESET;
		int							_number;
};

#endif
