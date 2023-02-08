/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:52:06 by jinholee          #+#    #+#             */
/*   Updated: 2023/02/08 16:29:34 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc == 2)
		Harl::complain(argv[1]);
	else
		std::cout << "usage: harl_filter [level, DEBUG|INFO|WARNING|ERROR|other]" << std::endl;
	return (0);
}
