/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:29:54 by jlaurent          #+#    #+#             */
/*   Updated: 2022/07/12 19:18:49 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	change(char c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}

int	ft_strlen(char *str)
{
	int	i;
	for (i = 0; str[i] != '\0'; i++);
	return (i);
}

int	sum(int ac, char **av)
{
	int	len = 0;

	for (int i = 1; i < ac - 1; i++)
		len = len + ft_strlen(av[i]);
	return (len);
}

int	main(int ac, char **av)
{
	int		i;
	char	*str;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	if (ac == 2)
	{
		str = (char *)malloc((char)ft_strlen(av[1]) + 1);
		for (i = 0; i < ft_strlen(av[1]); i++)
			str[i] = change(av[1][i]);
		std::cout << str << std::endl;
		return (0);
	}
	str = (char *)malloc((char)sum(ac, av) + 1);
	for (int j = 1; j < ac; j++)
		for (int k = 0; k < ft_strlen(av[j]); k++)
			std::cout << change(av[j][k]);
	std::cout << std::endl;
	return (0);
}
