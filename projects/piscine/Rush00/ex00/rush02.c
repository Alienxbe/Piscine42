/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areinhar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 15:37:02 by areinhar          #+#    #+#             */
/*   Updated: 2020/09/13 21:13:12 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int x, int y, int i, int j)
{
	if (i == 0)
	{
		if (j == 0 || j == x - 1)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else if (i == y - 1)
	{
		if (j == 0 || j == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		if (j == 0 || j == x - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			print_line(x, y, i, j);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
