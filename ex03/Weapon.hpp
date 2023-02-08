/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 19:08:27 by jinholee          #+#    #+#             */
/*   Updated: 2023/02/08 15:33:46 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WEAPON_HPP__
# define __WEAPON_HPP__

# include <string>

class Weapon
{
private:
	std::string	_type;
public:
	Weapon(const std::string& type);
	~Weapon();

	void				setType(const std::string&);
	const std::string&	getType() const;
};

#endif
