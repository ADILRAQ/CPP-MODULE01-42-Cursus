/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:10:58 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/08 15:56:14 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANB_HPP_
#define _HUMANB_HPP_

#include "Weapon.hpp"

class HumanB {
	private:
		std::string	name;
		Weapon		*weapon;

	public:
		HumanB(std::string n);
		void		attack(void);
		void		setWeapon(Weapon &w);
		std::string	getName(void);
};

#endif /* _HUMANB_HPP_ */