/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 13:25:51 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/06 18:41:03 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

static void	fileTreatment(char **av)
{
	std::fstream	inFile;
	std::fstream	outFile;
	std::string		line;

	if (!openFiles(inFile, outFile, av[1]))
		return ;
	while (std::getline(inFile, line))
	{
		treatLine(line, av[2], av[3]) += '\n';
		std::cout << "Line: " << line;
	}
}

int	main(int ac, char **av)
{
	if (ac == 4)
		fileTreatment(av);
	else
		std::cout << "Error: Invalid number of arguments\n";
	return (0);
}
