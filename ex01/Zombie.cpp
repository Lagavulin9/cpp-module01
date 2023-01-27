/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:14:39 by jinholee          #+#    #+#             */
/*   Updated: 2023/01/25 15:23:02 by jinholee         ###   ########.fr       */
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
	this->name = name;
}

std::string	Zombie::getName(void)
{
	return this->name;
}

void	Zombie::announce(void)
{
	std::cout << this->getName();
	std::cout<< ": BraiiiiiiinnnzzzZ..." << std::endl;
}
