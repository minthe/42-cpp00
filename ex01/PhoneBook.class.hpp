/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 19:22:05 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/02/24 18:17:30 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.class.hpp"

class PhoneBook {

	public:

		PhoneBook(void);
		~PhoneBook(void);

		void	readme(void);
		void	add_contact(int index);
		void	search_contact(void);
		void	print_contact(int index) const;
		void	print_contact_row(int index) const;
		int		getContactNumber(void) const;

	private:

		Contact	_contact_data[8];

};

#endif
