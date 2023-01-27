/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:22:28 by jinholee          #+#    #+#             */
/*   Updated: 2023/01/25 16:08:43 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;
	int		N;

	N = 10;
	horde = Zombie::zombieHorde(N, "Zombie ");
	for (int i=0; i<N; i++)
	{
		horde[i].announce();
	}
	delete horde;
	return (0);
}
