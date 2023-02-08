/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 19:14:25 by jinholee          #+#    #+#             */
/*   Updated: 2023/02/08 15:28:27 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, const Weapon& weapon):
	_name(name),
	_weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void	HumanA::setName(const std::string& name)
{
	this->_name = name;
}

const std::string&	HumanA::getName(void)
{
	return (this->_name);
}

void	HumanA::attack(void)
{
	std::cout << this->_name;
	std::cout << " attacks with their ";
	std::cout << this->_weapon.getType() << std::endl;
}
