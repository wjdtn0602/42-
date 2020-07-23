/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungspar <ukbjjang@naver.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 17:58:52 by jungspar          #+#    #+#             */
/*   Updated: 2020/07/23 18:26:43 by jungspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		rot_13(char c)
{
	if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
		c += 13;
	else if ((c >= 'n' && c <= 'z') || (c >= 'N' || c <= 'Z'))
		c -= 13;
	return (c);
}

int		main(int ac, char **av)
{
	char c;

	if (ac == 2)
	{
		while (*av[1])
		{
			c = rot_13(*av[1]);
			write(1, &c, 1);
			av[1]++;
		}
	}
	write(1, "\n", 1);
}
