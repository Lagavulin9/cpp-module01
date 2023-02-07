/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:42:58 by jinholee          #+#    #+#             */
/*   Updated: 2023/02/06 16:46:12 by jinholee         ###   ########.fr       */
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
	Zombie();
	~Zombie();
	
	static Zombie	*newZombie(std::string name);

	void			announce(void);
	void			setName(const std::string& name);
	std::string		getName(void);
	void			randomChump(std::string name);
};

#endif