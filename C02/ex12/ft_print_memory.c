/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 18:39:25 by mykman            #+#    #+#             */
/*   Updated: 2020/09/23 22:40:55 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthexa(long int n)
{
	char *base;

	base = "0123456789abcdef";
	ft_putchar(base[n / 16]);
	ft_putchar(base[n % 16]);
}

void	ft_putcontent(char *str, int n)
{
	int i;

	i = -1;
	while (++i < n)
	{
		if (str[i] < 32 || str[i] == 127)
			ft_putchar('.');
		else
			ft_putchar(str[i]);
	}
}

void	ft_putcontent_hexa(char *str, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_puthexa((unsigned char)str[i]);
		if (i++ % 2)
			ft_putchar(' ');
	}
	if (n != 16)
	{
		while (n < 16)
		{
			write(1, "  ", 2);
			if (n++ % 2)
				ft_putchar(' ');
		}
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int i;
	int j;

	i = 0;
	while ((unsigned int)i < size)
	{
		j = 8;
		while (--j > -1)
		{
			ft_puthexa((long int)(addr + i) >> (j * 8) & 0xff);
		}
		write(1, ": ", 2);
		ft_putcontent_hexa(addr + i, (size - i < 16) ? size - i : 16);
		ft_putcontent(addr + i, (size - i < 16) ? size - i : 16);
		ft_putchar('\n');
		i += 16;
	}
	return (addr);
}
