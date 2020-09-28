/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_to_text.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 21:58:50 by mykman            #+#    #+#             */
/*   Updated: 2020/09/27 20:50:52 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_name_digit(int digits, t_nbr *array)
{
	while (array->mode != -1)
	{
		if (array->mode == 1 && array->value == digits)
			return (array->name);
		array++;
	}
	return (0);
}

void	ft_put_non_multiple_3(int *n_size, t_nbr *array, char *str, int **i)
{
	char *spelled_n;

	spelled_n = number_to_text(ft_atoin(str + **i, *n_size % 3), array);
	ft_putstr(spelled_n);
	**i = **i + *n_size % 3;
	*n_size -= *n_size % 3;
	free(spelled_n);
}

int		ft_putunit_name(int number_size, t_nbr *array, char *str, int *i)
{
	char	*spelled_number;

	if (number_size % 3)
		ft_put_non_multiple_3(&number_size, array, str, &i);
	else
	{
		if (*i != 0)
			ft_putstr(" ");
		spelled_number = number_to_text(ft_atoin(str + *i, 3), array);
		ft_putstr(spelled_number);
		number_size -= 3;
		*i += 3;
		free(spelled_number);
	}
	if (number_size)
	{
		ft_putstr(" ");
		ft_putstr(ft_name_digit(number_size + 3, array));
	}
	return (number_size);
}

void	ft_input_to_text(char *str, t_nbr *array)
{
	int number_size;
	int i;

	number_size = ft_strlen(str);
	i = 0;
	while (number_size > 0)
	{
		if (ft_atoin(str + i, 3))
			number_size = ft_putunit_name(number_size, array, str, &i);
		else
		{
			number_size -= 3;
			i += 3;
		}
	}
}
