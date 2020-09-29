/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 16:20:59 by mykman            #+#    #+#             */
/*   Updated: 2020/09/27 22:49:57 by rcammaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int c;

	if (!(str[0] >= '0' && str[0] <= '9'))
		return (0);
	c = 0;
	while (str[c])
	{
		if (!((str[c] >= '0' && str[c] <= '9') || str[c] == ' '))
			return (0);
		c++;
	}
	return (1);
}

int		ft_str_is_printable(char *str)
{
	int c;

	c = 0;
	while (str[c])
	{
		if (!(str[c] > 31 && str[c] < 127))
			return (0);
		c++;
	}
	return (1);
}
