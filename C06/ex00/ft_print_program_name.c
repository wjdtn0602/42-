/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungspar <ukbjjang@naver.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 17:13:39 by jungspar          #+#    #+#             */
/*   Updated: 2020/07/23 14:53:32 by jungspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		i = 0;
		while (argv[0][i] != '\0')
		{
			++i;
		}
		write(1, argv[0], i);
		write(1, "\n", 1);
	}
}
