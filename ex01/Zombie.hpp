/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:35:51 by jinholee          #+#    #+#             */
/*   Updated: 2023/01/25 15:52:15 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

# include <string>
# include <iostream>

class Zombie
{
private:
	std::string	name;
public:
	static Zombie	*zombieHorde(int N, std::string name);
	
	Zombie();
	~Zombie();

	void			announce(void);
	void			setName(const std::string& name);
	std::string		getName(void);
	Zombie			*newZombie(std::string name);
};

#endif
