/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 20:15:49 by mykman            #+#    #+#             */
/*   Updated: 2020/10/01 00:29:34 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_index(char c, char *str)
{
	int i;

	i = -1;
	while (str[++i])
		if (str[i] == c)
			return (i);
	return (-1);
}

int		ft_nlen(unsigned int n, unsigned int base_size)
{
	if (n < base_size)
		return (1);
	return (1 + ft_nlen(n / base_size, base_size));
}

int		ft_atoi_base(char *str, char *base, int base_size)
{
	int i;
	int n;
	int sign;

	n = 0;
	sign = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = !sign;
	while (ft_index(str[i], base) >= 0)
		n = n * base_size + ft_index(str[i++], base);
	return (sign ? -n : n);
}

int		ft_check_base(char *base)
{
	int i;

	i = -1;
	while (base[++i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| ft_index(base[i], base + i + 1) >= 0
			|| (base[i] >= 9 && base[i] <= 13))
			return (0);
	}
	return ((i < 2) ? 0 : i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char			*str;
	unsigned int	nb;
	int				n;
	int				i;
	int				size_base_to;

	if (!(ft_check_base(base_from) && (size_base_to = ft_check_base(base_to))))
		return (NULL);
	n = ft_atoi_base(nbr, base_from, ft_check_base(base_from));
	nb = (n < 0) ? -n : n;
	i = ft_nlen(nb, size_base_to) + ((n < 0) ? 1 : 0);
	if (!(str = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i] = 0;
	while (i--)
	{
		str[i] = base_to[nb % size_base_to];
		nb /= size_base_to;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
