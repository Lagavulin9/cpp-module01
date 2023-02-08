/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 19:28:06 by jinholee          #+#    #+#             */
/*   Updated: 2023/02/08 15:46:18 by jinholee         ###   ########.fr       */
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
	std::string	_name;
	Weapon		*_weapon;
public:
	HumanB(const std::string&);
	~HumanB();

	void				attack();
	void				setName(const std::string&);
	void				setWeapon(Weapon&);
	const std::string&	getName() const;
};

#endif
