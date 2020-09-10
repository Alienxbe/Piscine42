/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 16:44:54 by mykman            #+#    #+#             */
/*   Updated: 2020/09/10 17:56:21 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int n1;
	int n2;

	n1 = 0;
	while (n1 < 100)
	{
		n2 = n1 + 1;
		while (n2 < 100)
		{
			ft_putchar('0' + n1 / 10);
			ft_putchar('0' + n1 % 10);
			ft_putchar(' ');
			ft_putchar('0' + n2 / 10);
			ft_putchar('0' + n2 % 10);
			if (n1 != 98 || n2 != 99)
			{
				write(1, ", ", 2);
			}
			n2++;
		}
		n1++;
	}
}
