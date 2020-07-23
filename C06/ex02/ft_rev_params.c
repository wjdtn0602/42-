/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungspar <ukbjjang@naver.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 23:46:01 by jungspar          #+#    #+#             */
/*   Updated: 2020/07/22 23:48:36 by jungspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int i;
	int len;

	i = argc - 1;
	while (i > 0)
	{
		len = 0;
		while (argv[i][len] != '\0')
		{
			++len;
		}
		write(1, argv[i], len);
		write(1, "\n", 1);
		--i;
	}
}
