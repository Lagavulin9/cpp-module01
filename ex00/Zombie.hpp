/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:42:58 by jinholee          #+#    #+#             */
/*   Updated: 2023/02/08 13:22:38 by jinholee         ###   ########.fr       */
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
	std::string	_name;
public:
	Zombie();
	~Zombie();
	
	static Zombie	*newZombie(std::string);
	static void		randomChump(std::string);

	void			announce(void);
	void			setName(const std::string&);
	std::string		getName(void);
};

#endif
