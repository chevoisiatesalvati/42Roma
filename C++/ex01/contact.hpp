/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalvemi <asalvemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:40:38 by asalvemi          #+#    #+#             */
/*   Updated: 2022/06/16 16:48:33 by asalvemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact {
	private:
		int					index;
		static std::string	fields[7];
		std::string			informations[7];

		enum Field {
			Firstname,
			LastName,
			Nickname,
			Address,
			Email,
			Phone,
			Birthday
		};

	public:
	Contact();
	virtual	~Contact();

	bool	setInformation(int index);
	void	displayHeader();
	void	display();
};

#endif