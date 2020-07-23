/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 22:16:12 by jungspar          #+#    #+#             */
/*   Updated: 2020/07/16 14:54:04 by jungspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int index;
	int	rev_index;

	index = 0;
	rev_index = size - 1;
	while (index < rev_index)
	{
		temp = *(tab + rev_index);
		*(tab + index) = *(tab + rev_index);
		*(tab + rev_index) = temp;
		index++;
		rev_index--;
	}
}
