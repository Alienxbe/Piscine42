/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_memory.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcammaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 15:26:14 by rcammaro          #+#    #+#             */
/*   Updated: 2020/09/27 22:40:15 by rcammaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	free_dict(t_nbr *array)
{
	t_nbr *ptr;

	ptr = array;
	while (ptr->mode != -1)
	{
		free(ptr->name);
		ptr++;
	}
	free(array);
}

void	free_split(char **array)
{
	char **ptr;

	ptr = array;
	while (*ptr)
	{
		free(*ptr);
		ptr++;
	}
	free(array);
}

int		free_and_return(char *str)
{
	free(str);
	return (0);
}

t_nbr	*free_and_return_ptr(char *str)
{
	free(str);
	return (0);
}
