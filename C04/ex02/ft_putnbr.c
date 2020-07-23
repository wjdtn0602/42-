/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungspar <ukbjjang@naver.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 01:32:38 by jungspar          #+#    #+#             */
/*   Updated: 2020/07/22 16:25:51 by jungspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		rev_putnbr(int n)
{
	char temp;

	temp = n % 10 + '0';
	if (n >= 10)
		rev_putnbr(n / 10);
	write(1, &temp, 1);
}

void		ft_putnbr(int nb)
{
	char temp;

	if (nb < 0)
	{
		write(1, "-", 1);
		temp = nb % 10 * (-1) + '0';
		if (nb <= -10)
			rev_putnbr(nb / -10);
		write(1, &temp, 1);
	}
	else
		rev_putnbr(nb);
}
