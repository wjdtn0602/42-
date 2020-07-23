/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 20:54:46 by jungspar          #+#    #+#             */
/*   Updated: 2020/07/05 20:56:57 by jungspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int a, int b)
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (++col <= b)
	{
		while (++row <= a)
		{
			if (row == 1 && (col == 1 || col == b))
				ft_putchar('A');
			else if (row == b && (col == 1 || col == b))
				ft_putchar('C');
			else if (row == 1 || row == b || col == 1 || col == b)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		row = 0;
		ft_putchar('\n');
	}
}
