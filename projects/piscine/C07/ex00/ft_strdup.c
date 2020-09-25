/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 09:21:40 by mykman            #+#    #+#             */
/*   Updated: 2020/09/25 19:05:17 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	if (!(dest = malloc(sizeof(*dest) * ft_strlen(src) + 1)))
		return (NULL);
	i = -1;
	while (++i < ft_strlen(src) + 1)
		dest[i] = src[i];
	return (dest);
}
