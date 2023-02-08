/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 19:08:24 by jinholee          #+#    #+#             */
/*   Updated: 2023/02/08 15:37:34 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type):
	_type(type)
{
}

Weapon::~Weapon()
{
}

void	Weapon::setType(const std::string& type)
{
	this->_type = type;
}

const std::string&	Weapon::getType(void) const
{
	return (this->_type);
}
