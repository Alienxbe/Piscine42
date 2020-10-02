/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:11:03 by mykman            #+#    #+#             */
/*   Updated: 2020/10/01 16:34:00 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *src)
{
	int len;

	len = 0;
	while (*src++)
		len++;
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < size)
		j += ft_strlen(strs[i++]);
	if (size > 0)
		j += (size - 1) * ft_strlen(sep);
	if (!(str = malloc(sizeof(char) * (j + 1))))
		return (0);
	i = 0;
	j = 0;
	while (i < size)
	{
		ft_strcpy(str + j, strs[i]);
		j += ft_strlen(strs[i]);
		if (++i < size)
			j += str + j + ft_strlen(sep) - ft_strcpy(str + j, sep);
	}
	str[j] = 0;
	return (str);
}
