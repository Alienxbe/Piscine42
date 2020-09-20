/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 22:06:18 by mykman            #+#    #+#             */
/*   Updated: 2020/09/13 22:43:37 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int x, int y, int cx, int cy)
{
	if (cy == 0)
	{
		if (cx == 0)
			ft_putchar('/');
		else if (cx == x - 1)
			ft_putchar('\\');
		else
			ft_putchar('*');
	}
	else if (cy == y - 1)
	{
		if (cx == 0)
			ft_putchar('\\');
		else if (cx == x - 1)
			ft_putchar('/');
		else
			ft_putchar('*');
	}
	else
	{
		if (cx == 0 || cx == x - 1)
			ft_putchar('*');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int cx;
	int cy;

	cy = 0;
	while (cy < y)
	{
		cx = 0;
		while (cx < x)
		{
			print_line(x, y, cx, cy);
			cx++;
		}
		ft_putchar('\n');
		cy++;
	}
}
