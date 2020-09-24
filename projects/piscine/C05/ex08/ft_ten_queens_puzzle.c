/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 11:24:35 by mykman            #+#    #+#             */
/*   Updated: 2020/09/23 16:47:43 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int g_possibilities;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_board(int board[10][10])
{
	int x;
	int y;

	y = -1;
	while (++y < 10)
	{
		x = -1;
		while (++x < 10)
			if (board[y][x])
				ft_putchar('0' + x);
	}
	ft_putchar('\n');
}

int		possible(int board[10][10], int x, int y)
{
	int i;
	int n;

	i = -1;
	while (++i < 10)
		if (board[y][i] || board[i][x])
			return (0);
	i = -1;
	n = (x > y) ? 10 - (x - y) : 10 - (y - x);
	while (++i < n)
		if ((x > y && board[i][x - y + i]) || (x <= y && board[y - x + i][i]))
			return (0);
	i = -1;
	n = (x + y < 10) ? x + y + 1 : 19 - x - y;
	while (++i < n)
		if ((x + y < 10 && board[i][x + y - i]) ||
				(x + y >= 10 && board[x + y - 9 + i][9 - i]))
			return (0);
	return (1);
}

int		solve(int board[10][10], int y)
{
	int x;

	if (y > 9)
		return (1);
	x = -1;
	while (++x < 10)
	{
		if (possible(board, x, y))
		{
			board[y][x] = 1;
			if (solve(board, y + 1))
			{
				print_board(board);
				g_possibilities++;
			}
			board[y][x] = 0;
		}
	}
	return (0);
}

int		ft_ten_queens_puzzle(void)
{
	int board[10][10];
	int i;

	g_possibilities = 0;
	i = -1;
	while (++i < 100)
		board[i / 10][i % 10] = 0;
	solve(board, 0);
	return (0);
}
