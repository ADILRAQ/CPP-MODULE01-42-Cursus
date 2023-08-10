/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treatLines.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 17:56:21 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/10 08:42:21 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int	readLine(std::fstream &inFile, std::string &line)
{
	char	c;

	line = "\0";
	while (inFile.get(c))
	{
		line += c;
			if (c == '\n')
				return (1);
	}
	if (!line.empty())
		return (1);
	return (0);
}

void	treatLine(std::string &line, const std::string s1, const std::string s2)
{
	std::string	helpStr;
	size_t		pos;
	size_t		len;

	pos = 0;
	len = 0;
	if (!s1.empty())
	{
		while (true)
		{
			pos = line.find(s1, pos + len);
			if (pos == std::string::npos)
				break ;
			helpStr = line.substr(0, pos);
			helpStr += s2;
			line = helpStr + &line[pos + s1.length()];
			len = s2.length();
		}
	}
}
