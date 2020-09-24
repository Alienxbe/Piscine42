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

int		ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int n;
	int exp;
	int minus;

	n = 0;
	exp = 0;
	minus = 1;
	while (ft_isspace(*str) || *str == '+' || *str == '-')
	{
		if (*str++ == '-')
			minus *= -1;
	}
	str--;
	while (*++str >= '0' && *str <= '9')
		n = n * 10 + (*str - '0');
	return (n * minus);
}
