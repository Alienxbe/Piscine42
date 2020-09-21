/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 09:21:40 by mykman            #+#    #+#             */
/*   Updated: 2020/09/21 15:39:52 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str++)
		i++;
	return i;
}

char	*ft_strdup(char *src)
{
	char *dest;
	int i;

	dest = malloc(sizeof(*dest) * ft_strlen(src) + 1);
	i = -1;
	while (++i < ft_strlen(src) + 1)
		dest[i] = src[i];
	return (dest);
}
