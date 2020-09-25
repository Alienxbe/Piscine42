/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:11:03 by mykman            #+#    #+#             */
/*   Updated: 2020/09/25 19:35:23 by mykman           ###   ########.fr       */
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

int		ft_tot_len(int size, char **strs, int len_sep)
{
	int i;
	int tot_len;

	tot_len = 0;
	i = -1;
	while (++i < size)
		tot_len += ft_strlen(strs[i]) + len_sep;
	return (tot_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		l;

	if (size == 0)
		return ("");
	if (!(str = malloc(sizeof(char)
		* (ft_tot_len(size, strs, ft_strlen(sep)) - ft_strlen(sep) + 1))))
		return (0);
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
