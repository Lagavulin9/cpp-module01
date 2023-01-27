/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:38:01 by jinholee          #+#    #+#             */
/*   Updated: 2023/01/25 15:46:54 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*Zombie::zombieHorde(int N, std::string name)
{
	Zombie		*horde = new Zombie[N];
	std::string	new_name;

	for (int i=0; i<N; i++)
	{
		new_name = name;
		new_name.append(std::to_string(i));
		horde[i].setName(new_name);
	}
	return horde;
}
