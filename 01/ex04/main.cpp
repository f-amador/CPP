/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 17:15:13 by framador          #+#    #+#             */
/*   Updated: 2025/03/17 18:02:40 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	searchNReplace(std::ifstream &inputFile, std::string name, std::string s1, std::string s2)
{
	std::string line;
	size_t pos;

	std::ofstream outputFile((name + ".replace").c_str());
	if (!outputFile.is_open())
	{
		std::cerr << "Error could not create Output File\n";
		return ;
	}
	while (std::getline(inputFile, line))
	{
		while((pos = line.find(s1)) != std::string::npos)
		{
			outputFile << line.substr(0, pos) << s2;
			line = line.substr(pos + s1.length());
		}
		outputFile << line << std::endl;	
	}
}

int main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cerr << "Invalid input\nUse: ./sed file word1 word2\n";
		return 1;
	}
	std::ifstream inputFile(av[1]);
	if (!inputFile.is_open())
	{
		std::cerr << "Error couldn't open file\n";
		return 1;
	}
	searchNReplace(inputFile, av[1], av[2], av[3]);
}