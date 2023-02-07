/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 19:13:39 by jinholee          #+#    #+#             */
/*   Updated: 2023/02/06 17:35:31 by jinholee         ###   ########.fr       */
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
	const std::string	name;
	Weapon&				weapon;
public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();

	void				attack();
	void				setName(std::string);
	const std::string&	getName();
};

#endif
