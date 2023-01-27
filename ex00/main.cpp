/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:42:11 by jinholee          #+#    #+#             */
/*   Updated: 2023/01/19 20:41:29 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	zombie = Zombie();

	zombie.setName("Foo");
	std::cout << "name: " << zombie.getName() << std::endl;
	zombie.announce();
	return (0);
}
