/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 19:37:10 by mykman            #+#    #+#             */
/*   Updated: 2020/09/28 11:33:30 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi_base(char *str, char *base);
int		check_bad_base(char *base);
int		ft_strlen(char *str);
int		ft_index(char c, char *str);

void	ft_rev_str(char *tab, int size)
{
	char	tmp;
	int		i;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[size - 1 - i];
		tab[size - 1 - i] = tab[i];
		tab[i] = tmp;
		i++;
	}
}

char	*ft_itoa_base(int n, int str_size, char *base_to)
{
	char	*str;
	int		i;
	int		j;

	if (!(str = malloc(sizeof(char) * (str_size + 1))))
		return (0);
	if ((i = n) == 0)
	{
		str[0] = '0';
		str[1] = 0;
		return (str);
	}
	j = 0;
	while (i)
	{
		str[j] = base_to[i % ft_strlen(base_to)];
		i /= ft_strlen(base_to);
		j++;
	}
	str[j] = 0;
	ft_rev_str(str, ft_strlen(str));
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		n;
	int		base_to_size;
	int		i;
	int		str_size;

	base_to_size = ft_strlen(base_to);
	if (ft_strlen(base_from) < 2 || base_to_size < 2
		|| check_bad_base(base_from) || check_bad_base(base_to))
		return (0);
	if (!(n = ft_atoi_base(nbr, base_from)))
		return (ft_itoa_base(n, 1, base_to));
	str_size = 0;
	i = n;
	while (i)
	{
		str_size++;
		i /= base_to_size;
	}
	return (ft_itoa_base(n, str_size, base_to));
}
