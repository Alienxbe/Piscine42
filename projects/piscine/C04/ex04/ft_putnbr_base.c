/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 14:30:45 by mykman            #+#    #+#             */
/*   Updated: 2020/09/16 17:40:12 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

int		check_bad_base(char *base)
{
	char *ptr1;
	char *ptr2;

	ptr1 = base - 1;
	while (*++ptr1)
	{
		if (*ptr1 == '+' || *ptr1 == '-')
			return (1);
		ptr2 = base - 1;
		while (*++ptr2)
			if (*ptr1 == *ptr2 && ptr1 != ptr2)
				return (1);
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				n_base;
	unsigned int	n;

	n_base = ft_strlen(base);
	if (n_base > 1 && !(check_bad_base(base)))
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			n = -nbr;
		}
		else
			n = nbr;
		if (n > (unsigned int)n_base - 1)
			ft_putnbr_base(nbr / n_base, base);
		ft_putchar(base[n % n_base]);
	}
}
