/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:49:44 by mykman            #+#    #+#             */
/*   Updated: 2020/09/16 17:58:01 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_expo(int base, int exp)
{
	int i;
	int n;

	i = -1;
	n = 1;
	while (++i < exp)
		n *= base;
	return (n);
}

int		ft_index(char c, char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		if (*str++ == c)
			return (i);
		i++;
	}
	return (-1);
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
		if (*ptr1 == '+' || *ptr1 == '-' || *ptr1 == ' ')
			return (1);
		ptr2 = base - 1;
		while (*++ptr2)
			if (*ptr1 == *ptr2 && ptr1 != ptr2)
				return (1);
	}
	return (0);
}

int		ft_atoi_base(char *str, char *base)
{
	int n;
	int exp;
	int minus_count;

	n = 0;
	exp = 0;
	minus_count = 0;
	if (ft_strlen(base) > 1 && check_bad_base(base))
		return (0);
	while (*str == ' ' || *str == '+' || *str == '-')
	{
		if (*str++ == '-')
			minus_count++;
	}
	str--;
	while (ft_index(*++str, base) != -1)
	{
	}
	while (ft_index(*--str, base) != -1)
		n += ft_index(*str, base) * ft_expo(ft_strlen(base), exp++);
	if (minus_count % 2)
		return (-n);
	return (n);
}
