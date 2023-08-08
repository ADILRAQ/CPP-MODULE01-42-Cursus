/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:04:12 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/08 15:55:21 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA_HPP_
#define _HUMANA_HPP_

#include "Weapon.hpp"

class HumanA {
	private:
		std::string	name;
		Weapon		&weapon;

	public:
		HumanA(std::string n, Weapon &w);
		void		attack(void);
		std::string	getName(void);
};

#endif /* _HUMANA_HPP_ */