/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 17:38:13 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/09 08:57:02 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HEADER_HPP_
#define _HEADER_HPP_

#include <iostream>
#include <fstream>

int		openFiles(std::fstream &inFile, std::fstream &outFile, std::string fileName);
int		readLine(std::fstream &inFile, std::string &line);
void    treatLine(std::string &line, const std::string s1, const std::string s2);

#endif /* _HEADER_HPP_ */