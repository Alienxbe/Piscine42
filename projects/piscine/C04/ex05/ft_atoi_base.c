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

int		ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str++)
		i++;
	return (i);
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

int		ft_atoi_base(char *str, char *base)
{
	int n;
	int sign;

	n = 0;
	sign = 1;
	while (ft_isspace(*str) || *str == '+' || *str == '-')
		if (*str++ == '-')
			sign *= -1;
	str--;
	while (ft_index(*++str, base) != -1)
		n = n * ft_strlen(base) + ft_index(*str, base);
	return (n * sign);
}
