/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:07:49 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/08 15:58:01 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon &w) : name(n), weapon(w)
{
	// name = n;
}

void	HumanA::attack(void)
{
	std::cout << getName() << " attacks with their " << weapon.getType() << std::endl;
}

std::string	HumanA::getName(void)
{
	return (name);
}
