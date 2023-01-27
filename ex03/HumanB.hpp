/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 19:28:06 by jinholee          #+#    #+#             */
/*   Updated: 2023/01/26 19:37:41 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HUMANB_HPP__
# define __HUMANB_HPP__

# include "Weapon.hpp"
# include <iostream>

class HumanB
{
private:
	std::string	name;
	Weapon		*weapon;
public:
	HumanB(std::string);
	~HumanB();

	void				attack();
	void				setName(std::string);
	void				setWeapon(Weapon& weapon);
	const std::string&	getName();
};

#endif
