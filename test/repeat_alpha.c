/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungspar <ukbjjang@naver.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 14:49:57 by jungspar          #+#    #+#             */
/*   Updated: 2020/07/23 16:48:11 by jungspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		count(char c)
{
	int i;

	if (c >= 'A' && c <= 'Z')
		i = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
		i = c - 'a' + 1;
	else
		i = 1;
	return (i);
}

int		main(int ac, char **av)
{
	int index;
	int i;

	i = 0;
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (av[1][i])
	{
		index = count(av[1][i]);
		while (index > 0)
		{
			ft_putchar(av[1][i]);
			index--;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
