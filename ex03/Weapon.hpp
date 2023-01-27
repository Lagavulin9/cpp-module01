/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 19:08:27 by jinholee          #+#    #+#             */
/*   Updated: 2023/01/26 19:19:25 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WEAPON_HPP__
# define __WEAPON_HPP__

# include <string>

class Weapon
{
private:
	std::string	type;
public:
	Weapon(std::string type);
	~Weapon();

	void				setType(std::string);
	const std::string&	getType();
};

#endif
