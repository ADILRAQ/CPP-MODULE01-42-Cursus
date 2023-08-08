/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 18:14:04 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/08 16:01:59 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!\n\n";
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money.\n";
	std::cout << "You didn't putenough bacon in my burger! If you did, I wouldn't be asking for more!\n\n";
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free.\nI've been coming for";
	std::cout << "years whereas you started working here since last month.\n\n";
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain(std::string level)
{
	const char	*str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	lvl;

	lvl = 0;
	while (lvl < 4 && level != str[lvl])
		lvl++;
	switch (lvl)
	{
		case 0:
			debug();

		case 1:
			info();

		case 2:
			warning();

		case 3:
			error();
			break;

		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break;
	}
}
