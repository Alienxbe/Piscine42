/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 15:21:56 by mykman            #+#    #+#             */
/*   Updated: 2020/09/14 18:45:21 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_char_is_printable(char c)
{
	if (!(c > 31 && c < 127))
		return (0);
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = -nb;
	}
	else
	{
		n = nb;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		n %= 10;
	}
	ft_putchar('0' + n);
}

void	ft_putstr_non_printable_hexa(char *str, int c)
{
	int d0;
	int d1;

	d0 = str[c] / 16;
	d1 = str[c] % 16;
	ft_putchar('\\');
	ft_putnbr(d0);
	if (d1 == 10)
		ft_putchar('a');
	else if (d1 == 11)
		ft_putchar('b');
	else if (d1 == 12)
		ft_putchar('c');
	else if (d1 == 13)
		ft_putchar('d');
	else if (d1 == 14)
		ft_putchar('e');
	else if (d1 == 15)
		ft_putchar('f');
	else
		ft_putnbr(d1);
}

void	ft_putstr_non_printable(char *str)
{
	int c;

	c = 0;
	while (str[c])
	{
		if (!(ft_char_is_printable(str[c])))
			ft_putstr_non_printable_hexa(str, c);
		else
			ft_putchar(str[c]);
		c++;
	}
}
