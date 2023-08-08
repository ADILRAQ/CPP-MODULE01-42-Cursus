/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 13:36:22 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/08 15:14:59 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *newZombie(std::string name)
{	
	Zombie  *newZombie = new Zombie(name);

	if (!newZombie)
	{
		std::cout << "Error: Dynamic allocation failed" << std::endl;
		std::exit(EXIT_FAILURE);
	}
	return (newZombie);
}
