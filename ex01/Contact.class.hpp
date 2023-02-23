/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 19:21:56 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/02/22 14:08:16 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>
#include <string>

class Contact {

	public:

		Contact( void );
		~Contact( void );

		std::string	getName( void ) const;
		void		setName( void );
		void		bar( void );

	private:

		std::string _name;
};

#endif
