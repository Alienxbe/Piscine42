/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcammaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 21:24:53 by rcammaro          #+#    #+#             */
/*   Updated: 2020/09/27 18:49:10 by rcammaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		size_total(int n, char **strs, char *sep)
{
	int	i;
	int sum;

	if (n < 1)
		return (0);
	sum = ft_strlen(sep) * (n - 1);
	i = -1;
	while (++i < n)
		sum += ft_strlen(strs[i]);
	return (sum);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;
	int		i;

	ptr = malloc(sizeof(*ptr) * (size_total(size, strs, sep) + 1));
	if (!ptr)
		return (0);
	*ptr = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(ptr, strs[i]);
		if (i < size - 1)
			ft_strcat(ptr, sep);
		i++;
	}
	return (ptr);
}
