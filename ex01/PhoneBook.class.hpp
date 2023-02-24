/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 19:22:05 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/02/24 12:11:51 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.class.hpp"

class PhoneBook {

	public:

		PhoneBook(void);
		~PhoneBook(void);

		void	run(void);
		void	getContact(int index) const;

	private:

		bool	_full;
		Contact	_contact_data[8];

};

#endif
