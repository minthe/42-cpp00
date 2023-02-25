/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 19:21:56 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/02/25 15:17:18 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>
#include <iomanip>
#include <string>

class Contact {

	public:

		Contact(void);
		~Contact(void);

		std::string	getFirstName(void) const;
		std::string	getLastName(void) const;
		std::string	getNickName(void) const;
		std::string	getPhone(void) const;
		std::string	getSecret(void) const;
		int			getNumber(void) const;
		bool		setFirstName(void);
		bool		setLastName(void);
		bool		setNickName(void);
		bool		setPhone(void);
		bool		setSecret(void);

	private:

		std::string					_first_name;
		std::string					_last_name;
		std::string					_nickname;
		std::string					_phone;
		std::string					_secret;

};

#endif
