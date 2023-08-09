/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:11:32 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/09 08:22:24 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string n) : name(n), weapon(NULL)
{
	// name = n;
	// weapon = NULL;
}

void	HumanB::attack(void)
{
	if (!weapon)
		std::cout << getName() << " has no weapon type" << std::endl;
	else
		std::cout << getName() << " attacks with their " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &w)
{
	weapon = &w;
}

std::string	HumanB::getName(void)
{
	return (name);
}
