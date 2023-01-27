/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 19:08:24 by jinholee          #+#    #+#             */
/*   Updated: 2023/01/25 19:34:44 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	setType(type);
}

Weapon::~Weapon()
{
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}

const std::string&	Weapon::getType(void)
{
	return (this->type);
}
