/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:22:28 by jinholee          #+#    #+#             */
/*   Updated: 2023/02/08 13:26:44 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;
	int		N = 10;

	horde = Zombie::zombieHorde(N, "Zombie ");
	for (int i=0; i<N; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}
