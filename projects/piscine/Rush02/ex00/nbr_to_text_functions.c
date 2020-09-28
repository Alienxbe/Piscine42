/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_to_text_functions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcammaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 19:37:08 by rcammaro          #+#    #+#             */
/*   Updated: 2020/09/27 14:50:35 by rcammaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*lookup_dict(int nbr, t_nbr *array)
{
	while (!(array->value == nbr && array->mode == 0))
	{
		if (array->mode == -1)
		{
			ft_putstr("Dict Error\n");
			return (0);
		}
		array++;
	}
	return (array->name);
}

/*
** The get_next function allocates memory and returns a freeable pointer to
** char. It must be freed by the caller function (read_100_999)
*/

char	*get_next(int nbr, t_nbr *array)
{
	char	*str;
	char	*next;

	if (nbr % 100 >= 20)
		return (read_20_99(nbr % 100, array));
	if (nbr % 100)
	{
		if (!(str = lookup_dict(nbr % 100, array)))
			return (0);
	}
	else
		str = "";
	next = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!next)
		return (0);
	ft_strcpy(next, str);
	return (next);
}

void	cat_100_999(char *str, char *digit, char *hundred, char *next)
{
	ft_strcpy(str, digit);
	ft_strcat(str, " ");
	ft_strcat(str, hundred);
	if (ft_strlen(next))
	{
		ft_strcat(str, " ");
		ft_strcat(str, next);
	}
}
