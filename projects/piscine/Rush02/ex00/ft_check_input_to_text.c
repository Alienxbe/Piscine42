/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input_to_text.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 12:35:47 by mykman            #+#    #+#             */
/*   Updated: 2020/09/27 21:24:09 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_check_name_digit(int digits, t_nbr *array)
{
	while (array->mode != -1)
	{
		if (array->mode == 1 && array->value == digits)
			return (1);
		array++;
	}
	return (dict_error());
}

int		ft_check_non_multiple_3(int *n_size, t_nbr *array, char *str, int **i)
{
	char	*spelled_number;

	if (!(spelled_number = number_to_text(
		ft_atoin(str + **i, *n_size % 3), array)))
	{
		free(spelled_number);
		return (1);
	}
	**i = **i + *n_size % 3;
	*n_size -= *n_size % 3;
	free(spelled_number);
	return (0);
}

int		ft_check_putunit_name(int number_size, t_nbr *array, char *str, int *i)
{
	char	*spelled_number;

	if (number_size % 3)
	{
		if (ft_check_non_multiple_3(&number_size, array, str, &i))
			return (-1);
	}
	else
	{
		if (!(spelled_number = number_to_text(ft_atoin(str + *i, 3), array)))
		{
			free(spelled_number);
			return (-1);
		}
		number_size -= 3;
		*i += 3;
		free(spelled_number);
	}
	if (number_size)
		if (ft_check_name_digit(number_size + 3, array) == 0)
			return (-1);
	return (number_size);
}

int		ft_check_input_to_text(char *str, t_nbr *array)
{
	int number_size;
	int i;

	number_size = ft_strlen(str);
	i = 0;
	while (str[i] && number_size > 0)
	{
		if (ft_atoin(str + i, 3))
		{
			if ((number_size = ft_check_putunit_name(
							number_size, array, str, &i)) == -1)
				return (0);
		}
		else
		{
			number_size -= 3;
			i += 3;
		}
	}
	return (1);
}
