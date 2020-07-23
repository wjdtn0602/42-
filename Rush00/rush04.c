/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 20:55:11 by jungspar          #+#    #+#             */
/*   Updated: 2020/07/05 20:57:03 by jungspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int a, int b)
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (++row <= b)
	{
		while (++col <= a)
		{
			if ((row == 1 && col == 1) || (row == b && col == b))
				ft_putchar('A');
			else if ((col == b && row == 1) || (row == b && col == 1))
				ft_putchar('C');
			else if (col == b || row == b || col == 1 || row == 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		col = 0;
		ft_putchar('\n');
	}
}
