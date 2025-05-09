/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamerlin <mamerlin@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 15:09:51 by mamerlin          #+#    #+#             */
/*   Updated: 2025/05/09 15:39:14 by mamerlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include <iomanip>

int main (int argc, char **argv)
{
	(void)argc;
	if(argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	int i = 0;

	while(argv[++i])
	{
		int j = -1;

		while(argv[i][++j])
		{
			std::cout << (char)toupper(argv[i][j]);
		}
	}
	std::cout << std::endl;
}
