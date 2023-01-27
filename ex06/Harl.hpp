/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:51:25 by jinholee          #+#    #+#             */
/*   Updated: 2023/01/27 13:24:21 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HARL__HPP__
# define __HARL__HPP__

# include <string>
# include <iostream>

class Harl
{
private:
	static void	debug(void);
	static void	info(void);
	static void	warning(void);
	static void	error(void);
public:
	Harl();
	~Harl();

	static void	complain(std::string level);
};
#endif
