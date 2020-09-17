/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 11:47:13 by mykman            #+#    #+#             */
/*   Updated: 2020/09/16 14:29:52 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		expo(int base, int exp)
{
	int i;
	int n;

	i = -1;
	n = 1;
	while (++i < exp)
		n *= base;
	return (n);
}

int		ft_atoi(char *str)
{
	int n;
	int exp;
	int minus_count;

	n = 0;
	exp = 0;
	minus_count = 0;
	while (*str == ' ' || *str == '+' || *str == '-')
	{
		if (*str++ == '-')
			minus_count++;
	}
	str--;
	while (*++str >= '0' && *str <= '9')
	{
	}
	while (*--str >= '0' && *str <= '9')
		n += (*str - 48) * expo(10, exp++);
	if (minus_count % 2)
		return (-n);
	return (n);
}
