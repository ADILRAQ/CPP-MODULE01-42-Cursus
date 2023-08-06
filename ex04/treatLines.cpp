/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treatLines.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 17:56:21 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/06 18:42:30 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

std::string	&treatLine(std::string &line, const std::string s1, const std::string s2)
{
	std::string	helpStr;
	size_t		pos;

	while (true)
	{
		pos = line.find(s1);
		if (pos == std::string::npos)
			break ;
		helpStr = line.substr(0, pos);
		std::cout << "helpStr: " << helpStr << std::endl;
		helpStr += s2;
		line = helpStr + &line[pos + s1.length()];
		std::cout << "line: " << line << std::endl;
	}
	return (line);
}
