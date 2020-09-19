/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 16:07:28 by mykman            #+#    #+#             */
/*   Updated: 2020/09/19 18:03:22 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		possible(int x, int y, int n, int grid[4][4]);

void	print_grid(int grid[4][4])
{
	int x;
	int y;

	y = -1;
	while (++y < 4)
	{
		x = -1;
		while (++x < 4)
			printf("%d ", grid[y][x]);
		printf("\n");
	}
	printf("\n--------------------\n");
}

int		solve(int grid[4][4])
{
	int x;
	int y;
	int i;

	y = -1;
	while (++y < 4)
	{
		x = -1;
		while (++x < 4)
		{
			if (grid[y][x] == 0)
			{
				i = 0;
				while (++i < 5)
				{
					if (possible(x, y, i, grid))
					{
						grid[y][x] = i;
						if (solve(grid))
							return (1);
						grid[y][x] = 0;
					}
				}
				return (0);
			}
		}
	}
	print_grid(grid);
	return (0);
}
