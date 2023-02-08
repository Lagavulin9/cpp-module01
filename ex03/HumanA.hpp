/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 19:13:39 by jinholee          #+#    #+#             */
/*   Updated: 2023/02/08 13:44:39 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HUMANA_HPP__
# define __HUMANA_HPP__

# include "Weapon.hpp"
# include <iostream>

class HumanA
{
private:
	std::string		_name;
	const Weapon&	_weapon;
public:
	HumanA(const std::string& name, const Weapon& weapon);
	~HumanA();

	void				attack();
	void				setName(const std::string&);
	const std::string&	getName();
};

#endif
