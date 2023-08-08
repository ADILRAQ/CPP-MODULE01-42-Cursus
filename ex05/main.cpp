/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 10:47:27 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/08 15:59:56 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	checkDigits(std::string str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!('0' <= str[i] && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	Harl	obj;

	if (ac == 2)
	{
		if (checkDigits(av[1]))
			obj.complain(av[1]);
		else
			std::cout << "Error: av[1] isn't a valid number\n";
	}
	else
		std::cout << "Error: Invalid number of arguments\n";
}
