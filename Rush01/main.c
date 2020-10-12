/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 15:36:25 by mykman            #+#    #+#             */
/*   Updated: 2020/09/20 21:21:35 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fill_grid(int grid[4][4]);
void	print_grid(int grid[4][4]);
int		str_to_tab(char *str, int *tab);
int		is_input_valid(int *input);
int		solve(int grid[4][4], int input[16]);

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		main(int argc, char **argv)
{
	int input[16];
	int grid[4][4];

	if (argc != 2 || !str_to_tab(argv[1], input) || !is_input_valid(input))
	{
		ft_putstr("Error\n");
		return (1);
	}
	fill_grid(grid);
	solve(grid, input);
	if (grid[0][0] == 0)
	{
		ft_putstr("Error\n");
		return (1);
	}
	print_grid(grid);
	return (0);
}
