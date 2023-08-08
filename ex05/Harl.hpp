/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 10:47:37 by araqioui          #+#    #+#             */
/*   Updated: 2023/08/08 13:39:40 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HARL_HPP_
#define _HARL_HPP_

#include <iostream>
#include <string>

class Harl {
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void ); 

	public:
		void complain(std::string level);
};

#endif /* _HARL_HPP_ */