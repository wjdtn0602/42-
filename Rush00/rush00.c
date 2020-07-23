/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 20:53:02 by jungspar          #+#    #+#             */
/*   Updated: 2020/07/05 20:56:40 by jungspar         ###   ########.fr       */
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
			if ((row == 1 || row == b) && (col == 1 || col == a))
				ft_putchar('o');
			else if (row == 1 || row == b)
				ft_putchar('-');
			else if (col == 1 || col == a)
				ft_putchar('|');
			else
				ft_putchar(' ');
		}
		col = 0;
		ft_putchar('\n');
	}
}
