/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 11:47:13 by mykman            #+#    #+#             */
/*   Updated: 2020/09/25 20:30:56 by mykman           ###   ########.fr       */
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
	int sign;
	int i;

	n = 0;
	sign = 1;
	i = -1;
	while (ft_isspace(str[++i]) || str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
		n = n * 10 + str[i++] - '0';
	return (n * sign);
}
