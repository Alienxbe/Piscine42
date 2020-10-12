/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 15:42:00 by mykman            #+#    #+#             */
/*   Updated: 2020/09/20 21:29:38 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_grid(int grid[4][4])
{
	int i;

	i = -1;
	while (++i < 16)
	{
		ft_putchar('0' + grid[i / 4][i % 4]);
		if (i % 4 == 3)
			ft_putchar('\n');
		else
			ft_putchar(' ');
	}
}
