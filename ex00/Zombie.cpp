/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:52:05 by jinholee          #+#    #+#             */
/*   Updated: 2023/02/08 13:19:38 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
}

void	Zombie::setName(const std::string& name)
{
	this->_name = name;
}

std::string	Zombie::getName(void)
{
	return this->_name;
}

void	Zombie::announce(void)
{
	std::cout << this->_name;
	std::cout<< ": BraiiiiiiinnnzzzZ..." << std::endl;
}
