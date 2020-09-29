/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_to_text.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 14:09:45 by rcammaro          #+#    #+#             */
/*   Updated: 2020/09/27 22:55:54 by rcammaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*read_0_19(int nbr, t_nbr *array)
{
	char	*str;
	char	*temp;

	if (!(temp = lookup_dict(nbr, array)))
		return (0);
	str = malloc(sizeof(char) * (ft_strlen(temp) + 1));
	if (!str)
		return (0);
	ft_strcpy(str, temp);
	return (str);
}

char	*read_20_99(int nbr, t_nbr *array)
{
	char	*str;
	char	*tens;
	char	*units;

	if (!(tens = lookup_dict(nbr - (nbr % 10), array)))
		return (0);
	if (nbr % 10)
	{
		if (!(units = lookup_dict(nbr % 10, array)))
			return (0);
	}
	else
		units = "";
	str = malloc(sizeof(char) * (ft_strlen(tens) + ft_strlen(units) + 2));
	if (!str)
		return (0);
	ft_strcpy(str, tens);
	if (ft_strlen(units))
		ft_strcat(str, " ");
	ft_strcat(str, units);
	return (str);
}

/*
** The read_100_99 function receives a freeable string from the next function.
** Once its usage is finished, it is freed.
*/

char	*read_100_999(int nbr, t_nbr *array)
{
	char	*str;
	char	*digit;
	char	*hundred;
	char	*next;
	int		size;

	if (!(digit = lookup_dict(nbr / 100, array)))
		return (0);
	if (!(hundred = lookup_dict(100, array)))
		return (0);
	if (!(next = get_next(nbr, array)))
		return (0);
	size = ft_strlen(digit) + ft_strlen(hundred) + ft_strlen(next);
	str = malloc(sizeof(char) * (size + 3));
	if (!str)
		return (0);
	cat_100_999(str, digit, hundred, next);
	free(next);
	return (str);
}

/*
** The function below returns a freeable pointer to char. In case of error,
** it returns the null pointer. If the dictionary does not allow to resolve
** the asked number, it displays an error message before returning 0.
*/

char	*number_to_text(int nbr, t_nbr *array)
{
	char	*str;

	if (nbr < 20)
	{
		if (!(str = read_0_19(nbr, array)))
			return (0);
		return (str);
	}
	if (nbr < 100)
	{
		if (!(str = read_20_99(nbr, array)))
			return (0);
		return (str);
	}
	if (!(str = read_100_999(nbr, array)))
		return (0);
	return (str);
}
