/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungspar <ukbjjang@naver.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 21:46:10 by jungspar          #+#    #+#             */
/*   Updated: 2020/07/23 22:00:11 by jungspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	char c;
	int len;

	if (ac == 2)
	{
		while (av[1][len])
			len++;
		len--;
		while (len > -1)
		{ 
			ft_putchar(av[1][len]);
			len--;
		}
	}
	write(1, "\n" ,1);
	return (0);
}
