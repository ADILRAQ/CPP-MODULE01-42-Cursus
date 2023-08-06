/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 11:22:16 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/05 12:49:46 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Memory addresses:" << std::endl;
	std::cout << "STR:  " << &str << std::endl;
	std::cout << "REF:  " << &stringREF << std::endl;
	std::cout << "PTR:  " << stringPTR << std::endl;
	std::cout << "\nValues:" << std::endl;
	std::cout << "STR:  " << str << std::endl;
	std::cout << "REF:  " << stringREF << std::endl;
	std::cout << "PTR:  " << *stringPTR << std::endl;
	return (0);
}
