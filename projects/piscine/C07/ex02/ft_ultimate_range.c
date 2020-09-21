/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 15:54:37 by mykman            #+#    #+#             */
/*   Updated: 2020/09/21 19:02:46 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *r;
	int i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	r = malloc(sizeof(int) * (max - min));
	i = -1;
	while (++i < max - min)
		r[i] = min + i;
	*range = r;
	return (max - min);
}
