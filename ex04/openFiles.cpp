/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   openFiles.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 17:37:50 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/06 18:38:31 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int	openFiles(std::fstream &inFile, std::fstream &outFile, std::string fileName)
{
	inFile.open(fileName, std::ios::in);
	if (!inFile.is_open())
	{
		std::cout << "Error: " << fileName << " doesn't exist\n";
		return (0);
	}
	fileName += ".replace";
	std::cout << "REPLACE FILE: " << fileName << std::endl;
	outFile.open(fileName, std::ios::out);
	if (!outFile.is_open())
	{
		std::cout << "Error: " << fileName << " didn't open\n";
		inFile.close();
		return (0);
	}
	return (1);
}
