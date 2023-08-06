/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 13:21:38 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/06 09:24:16 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string t) : type(t)
{
	// type = t;
}

void	Weapon::setType(const std::string str)
{
	type = str;
}

const std::string	&Weapon::getType(void) const
{
	return (type);
}
