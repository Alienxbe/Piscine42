/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:11:03 by mykman            #+#    #+#             */
/*   Updated: 2020/09/21 19:03:25 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *src)
{
	int len;

	len = 0;
	while (*src++)
		len++;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		tot_len;
	int		i;
	int		j;
	int		l;

	if (size == 0)
		return ("");
	tot_len = 0;
	i = -1;
	while (++i < size)
		tot_len += ft_strlen(strs[i]) + ft_strlen(sep);
	str = malloc(sizeof(char) * (tot_len - ft_strlen(sep) + 1));
	i = -1;
	l = 0;
	while (++i < size)
	{
		while (*strs[i])
			str[l++] = *strs[i]++;
		j = -1;
		while (++j < ft_strlen(sep) && (i < size - 1))
			str[l++] = sep[j];
	}
	str[l] = 0;
	return (str);
}
