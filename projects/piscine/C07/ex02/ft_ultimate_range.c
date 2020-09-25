/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 15:54:37 by mykman            #+#    #+#             */
/*   Updated: 2020/09/25 19:16:14 by mykman           ###   ########.fr       */
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
	if (!(r = malloc(sizeof(int) * (max - min))))
		return (-1);
	i = -1;
	while (++i < max - min)
		r[i] = min + i;
	*range = r;
	return (max - min);
}
