/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 08:59:48 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/05 11:21:26 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
#define _ZOMBIE_HPP_

#include <iostream>

# define NBZOMBIES 6

class Zombie {
	private:
		std::string	name;

	public:
		~Zombie(void);
		void	announce(void);
		void	setName(std::string n);
};

Zombie	*zombieHorde(int N, std::string name);

#endif /* _ZOMBIE_HPP_ */