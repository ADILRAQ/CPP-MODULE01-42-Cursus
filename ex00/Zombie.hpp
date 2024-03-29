/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 13:36:29 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/08 14:49:40 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
#define _ZOMBIE_HPP_

#include <iostream>

class Zombie {
	private:
		std::string	name;

	public:
		Zombie(std::string n);
		~Zombie(void);
		void	announce(void);
		std::string	getName(void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif /* _ZOMBIE_HPP_ */