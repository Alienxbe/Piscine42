/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 08:29:42 by mykman            #+#    #+#             */
/*   Updated: 2020/09/19 17:32:32 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		verif_possible(int *tab);
int		ft_str_to_tab(char *str, int *tab);
int		solve(int grid[4][4]);

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int argc, char **argv)
{
	int input[16];
	int x;
	int y;
	int grid[4][4];

	if (argc != 2 || !ft_str_to_tab(argv[1], input) || !verif_possible(input))
	{
		ft_putstr("Error");
		return (1);
	}
	y = -1;
	while (++y < 4)
	{
		x = -1;
		while (++x < 4)
		{
			grid[y][x] = 0;
		}
	}
	solve(grid);
	return (0);
}
