/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 02:21:59 by mykman            #+#    #+#             */
/*   Updated: 2020/09/28 04:12:51 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *return_tab;
	int i;

	return_tab = malloc(sizeof(int) * length);
	i = -1;
	while (++i < length)
		return_tab[i] = (*f)(tab[i]);
	return (return_tab);
}
