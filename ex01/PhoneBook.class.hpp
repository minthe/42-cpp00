/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 19:22:05 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/02/25 16:54:36 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.class.hpp"

class PhoneBook {

	public:

		PhoneBook(void);
		~PhoneBook(void);

		// ADD
		void	add_contact(int index);
		void	add_first_name(int index);
		void	add_last_name(int index);
		void	add_nickname(int index);
		void	add_phone(int index);
		void	add_secret(int index);

		// SEARCH
		void	search_contact(void);
		void	print_contact(int index) const;
		void	print_contact_row(int index) const;

		// Utils
		void	print_text(std::string str, std::string color) const;
		void	welcome_message(void) const;
		void	print_invalid_message(void) const;
		void	print_success_message(int index) const;
		void	print_options(void) const;
		void	print_exit_message(void) const;

	private:

		Contact						_contact_data[8];
		static const short			_REVISION;
		static const std::string	_COLOR_STD;
		static const std::string	_COLOR_WARNING;
		static const std::string	_COLOR_SUCCESS;
};

#endif
