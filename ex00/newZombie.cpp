/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 13:36:22 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/10 16:24:44 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *newZombie(std::string name)
{	
	Zombie  *newZombie = new(std::nothrow) Zombie(name);

	if (!newZombie)
	{
		std::cout << "Error: Dynamic allocation failed" << std::endl;
		std::exit(EXIT_FAILURE);
	}
	return (newZombie);
}
