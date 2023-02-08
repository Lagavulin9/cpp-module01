/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 19:44:13 by jinholee          #+#    #+#             */
/*   Updated: 2023/02/08 15:46:26 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name):
	_name(name),
	_weapon(0)
{
}

HumanB::~HumanB()
{
}

void	HumanB::setName(const std::string& name)
{
	this->_name = name;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

const std::string&	HumanB::getName(void) const
{
	return (this->_name);
}

void	HumanB::attack(void)
{
	std::cout << this->getName();
	std::cout << " attacks with their ";
	if (this->_weapon)
		std::cout << this->_weapon->getType() << std::endl;	
	else
		std::cout << "bear hands" << std::endl;
	
}
