/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 08:59:45 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/10 16:25:01 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zombies;
	int		i;

	zombies = new(std::nothrow) Zombie[N];
	if (!zombies)
	{
		std::cout << "Error: Dynamic allocation failed" << std::endl;
		std::exit(EXIT_FAILURE);
	}
	i = -1;
	while (++i < NBZOMBIES)
		zombies[i].setName(name);
	return (zombies);
}
