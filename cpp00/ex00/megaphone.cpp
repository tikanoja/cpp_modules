/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:30:42 by ttikanoj          #+#    #+#             */
/*   Updated: 2023/07/17 14:16:32 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	i = 0;
	int	j = 1;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (av[j])
	{
		while(av[j][i])
		{
			if (av[j][i] >= 'a' && av[j][i] <= 'z')
				av[j][i] = std::toupper(av[j][i]);
			std::cout << av[j][i];
			i++;
		}
		j++;
		i = 0;
	}
	std::cout << std::endl;
	return (0);
}
