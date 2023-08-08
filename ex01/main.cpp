/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 08:59:41 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/08 11:09:14 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombies;
	int		i;

	if (NBZOMBIES > 0)
	{
		zombies = zombieHorde(NBZOMBIES, "GRRRRR....");
		i = -1;
		while (++i < NBZOMBIES)
			zombies[i].announce();
		delete[] zombies;
	}
}
