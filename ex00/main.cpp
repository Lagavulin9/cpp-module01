/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:42:11 by jinholee          #+#    #+#             */
/*   Updated: 2023/02/08 13:26:48 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	stackZombie = Zombie();
	Zombie	*heapZombie = Zombie::newZombie("heap");

	stackZombie.setName("Foo");
	stackZombie.announce();
	heapZombie->announce();
	heapZombie->setName("Bar");
	heapZombie->announce();
	Zombie::randomChump("random Chump");
	delete heapZombie;
	return (0);
}
