/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 18:13:58 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/08 16:01:08 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	obj;

	if (ac == 2)
		obj.complain(av[1]);
	else
		std::cout << "Error: Invalid number of arguments\n";
}
