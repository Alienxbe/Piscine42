/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 17:12:56 by mykman            #+#    #+#             */
/*   Updated: 2020/09/20 18:41:28 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		generate_up(int grid[4][4], int x)
{
	int max;
	int max_count;
	int y;

	max = 0;
	max_count = 0;
	y = -1;
	while (++y < 4)
	{
		if (grid[y][x] > max)
		{
			max = grid[y][x];
			max_count++;
		}
	}
	return (max_count);
}

int		generate_down(int grid[4][4], int x)
{
	int max;
	int max_count;
	int y;

	max = 0;
	max_count = 0;
	y = 4;
	while (--y > -1)
	{
		if (grid[y][x] > max)
		{
			max = grid[y][x];
			max_count++;
		}
	}
	return (max_count);
}

int		generate_left(int grid[4][4], int y)
{
	int max;
	int max_count;
	int x;

	max = 0;
	max_count = 0;
	x = -1;
	while (++x < 4)
	{
		if (grid[y][x] > max)
		{
			max = grid[y][x];
			max_count++;
		}
	}
	return (max_count);
}

int		generate_right(int grid[4][4], int y)
{
	int max;
	int max_count;
	int x;

	max = 0;
	max_count = 0;
	x = 4;
	while (--x > -1)
	{
		if (grid[y][x] > max)
		{
			max = grid[y][x];
			max_count++;
		}
	}
	return (max_count);
}

int		*generate_input(int grid[4][4])
{
	static int	input[16];
	int			i;

	i = -1;
	while (++i < 4)
	{
		input[i] = generate_up(grid, i);
		input[i + 4] = generate_down(grid, i);
		input[i + 8] = generate_left(grid, i);
		input[i + 12] = generate_right(grid, i);
	}
	return (input);
}
