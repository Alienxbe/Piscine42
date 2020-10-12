/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 15:44:48 by mykman            #+#    #+#             */
/*   Updated: 2020/09/25 19:13:23 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *range;
	int i;

	if (min >= max || !(range = malloc(sizeof(int) * (max - min))))
		return (0);
	i = -1;
	while (++i < max - min)
		range[i] = min + i;
	return (range);
}
