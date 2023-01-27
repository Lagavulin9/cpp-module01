/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 19:14:25 by jinholee          #+#    #+#             */
/*   Updated: 2023/01/26 19:34:25 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon):
	weapon(weapon)
{
	setName(name);
}

HumanA::~HumanA()
{
}

void	HumanA::setName(std::string name)
{
	this->name = name;
}

const std::string&	HumanA::getName(void)
{
	return (this->name);
}

void	HumanA::attack(void)
{
	std::cout << this->getName();
	std::cout << " attacks with their ";
	std::cout << this->weapon.getType() << std::endl;
}
