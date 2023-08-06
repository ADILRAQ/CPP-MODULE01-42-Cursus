/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 13:18:34 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/06 08:51:48 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_HPP_
#define _WEAPON_HPP_

#include <iostream>

class Weapon {
	private:
		std::string	type;

	public:
		Weapon(std::string t);
		void		setType(const std::string str);
		const std::string	&getType(void) const;
};

#endif /* _WEAPON_HPP_ */