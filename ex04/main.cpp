/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 20:29:15 by jinholee          #+#    #+#             */
/*   Updated: 2023/01/26 17:48:30 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

std::string	str_replace(std::string line, std::string to_find, std::string to_replace)
{
	size_t	pos;
	size_t	tmp;

	pos = 0;
	while (pos < line.size())
	{
		pos = line.find(to_find, pos);
		if (pos == std::string::npos)
			break ;
		tmp = pos;
		line.erase(pos, to_find.length());
		line.insert(pos, to_replace);
		pos += to_replace.length();
	}	
	return (line);
}

void	replace_swap(std::string orig, std::string swap)
{
	std::remove(orig.data());
	std::rename(swap.data(), orig.data());
}

int	main(int argc, char **argv)
{
	std::ifstream	ifile;
	std::ofstream	ofile;
	std::string		line, outline, to_find, to_replace, swap;

	if (argc != 4)
		return (0);
	swap = argv[1];
	to_find = argv[2];
	to_replace = argv[3];
	ifile.open(argv[1], std::ifstream::in);
	if (!ifile)
	{
		perror(argv[1]);
		return (1);
	}
	ofile.open(swap.append(".swap"), std::ofstream::trunc);
	while (std::getline(ifile, line))
	{
		line = str_replace(line, to_find, to_replace);
		ofile << line << std::endl;
	}
	ifile.close();
	ofile.close();
	replace_swap(argv[1], swap);
	return (0);
}
