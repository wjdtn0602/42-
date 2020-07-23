/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungspar <ukbjjang@naver.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 23:42:53 by jungspar          #+#    #+#             */
/*   Updated: 2020/07/22 23:45:30 by jungspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int i;
	int len;

	i = 1;
	while (i < argc)
	{
		len = 0;
		while (argv[i][len] != '\0')
		{
			++len;
		}
		write(1, argv[i], len);
		write(1, "\n", 1);
		++i;
	}
}
