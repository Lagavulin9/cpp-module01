/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 19:44:13 by jinholee          #+#    #+#             */
/*   Updated: 2023/01/26 19:38:15 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name):
	weapon(0)
{
	setName(name);
}

HumanB::~HumanB()
{
}

void	HumanB::setName(std::string name)
{
	this->name = name;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}

const std::string&	HumanB::getName(void)
{
	return (this->name);
}

void	HumanB::attack(void)
{
	std::cout << this->getName();
	std::cout << " attacks with their ";
	if (this->weapon)
		std::cout << this->weapon->getType() << std::endl;	
	else
		std::cout << "bear hands" << std::endl;
	
}
