/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 08:59:43 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/08 15:45:16 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie(void)
{
	std::cout << getName() << ": destroyed !!" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << getName() << ": Created !!" << std::endl;
}

void	Zombie::setName(std::string n)
{
    name = n;
}

std::string	Zombie::getName(void)
{
	return (name);
}