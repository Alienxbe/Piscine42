/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 14:41:24 by mykman            #+#    #+#             */
/*   Updated: 2020/09/23 17:38:47 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int c;

	c = 0;
	while (src[c] && c < size - 1)
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = 0;
	return ((unsigned int)ft_strlen(src));
}
