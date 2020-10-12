/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 16:08:55 by mykman            #+#    #+#             */
/*   Updated: 2020/09/20 18:20:03 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		possible(int grid[4][4], int pos, int n);
int		array_cmp(int l1[16], int l2[16]);
int		*generate_input(int grid[4][4]);
int		solve(int grid[4][4], int input[16]);

int		test_possibilities(int grid[4][4], int pos, int input[16])
{
	int i;

	i = 0;
	while (++i < 5)
	{
		if (possible(grid, pos, i))
		{
			grid[pos / 4][pos % 4] = i;
			if (solve(grid, input))
				return (1);
			grid[pos / 4][pos % 4] = 0;
		}
	}
	return (0);
}

int		solve(int grid[4][4], int input[16])
{
	int pos;

	pos = -1;
	while (++pos < 16)
	{
		if (grid[pos / 4][pos % 4] == 0)
		{
			if (test_possibilities(grid, pos, input))
				return (1);
			return (0);
		}
	}
	if (array_cmp(input, generate_input(grid)))
		return (1);
	return (0);
}
