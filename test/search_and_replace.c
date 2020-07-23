/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungspar <ukbjjang@naver.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 16:32:47 by jungspar          #+#    #+#             */
/*   Updated: 2020/07/23 16:54:31 by jungspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	if (ac == 4 && av[2][1] == '\0' && av[3][1] == '\0')
	{
		while (av[1][0])
		{
			if (av[1][0] == av[2][0])
				av[1][0] = av[3][0];
			write(1, av[1], 1);
			av[1]++;
		}
	}
	wrtie(1, "\n", 1);
}
