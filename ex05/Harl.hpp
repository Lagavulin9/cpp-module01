/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 20:32:06 by jinholee          #+#    #+#             */
/*   Updated: 2023/02/08 16:06:15 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HARL_HPP__
# define __HARL_HPP__

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

	void	complain(std::string level);
};

#endif
