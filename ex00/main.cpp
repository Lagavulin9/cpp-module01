/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:42:11 by jinholee          #+#    #+#             */
/*   Updated: 2023/02/06 16:46:56 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	stackZombie = Zombie();
	Zombie	*heapZombie = newZombie("heap");

	stackZombie.setName("Foo");
	std::cout << "name: " << stackZombie.getName() << std::endl;
	stackZombie.announce();
	return (0);
}
