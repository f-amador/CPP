/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <framador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 19:47:43 by framador          #+#    #+#             */
/*   Updated: 2025/05/31 10:36:42 by framador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char *argv[])
{
	int j;
	if (argc == 1)
	{
		std::cout << argc << std::endl;
		return (0);
	}
	for (int i = 1; i < argc ;)
	{
		j = 0;
		for(; argv[i][j]; j++)
		{
			argv[i][j] = std::toupper(argv[i][j]);
			std::cout << argv[i][j];
			
		}
			if (i++ != argc - 1)
			std::cout << " ";
	}
	std::cout << std::endl;
}