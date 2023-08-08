/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 13:25:51 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/08 11:28:13 by araqioui         ###   ########.fr       */
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
	while (true)
	{
		if (readLine(inFile, line))
			treatLine(line, av[2], av[3]);
		else
			break ;
		outFile << line;
	}
	inFile.close();
	outFile.close();
}

int	main(int ac, char **av)
{
	if (ac == 4)
		fileTreatment(av);
	else
		std::cout << "Error: Invalid number of arguments\n";
	return (0);
}
