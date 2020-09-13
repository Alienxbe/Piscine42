/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 14:41:24 by mykman            #+#    #+#             */
/*   Updated: 2020/09/13 22:03:18 by mykman           ###   ########.fr       */
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
	while (src[c])
	{
		if (c == size - 1)
		{
			dest[c] = 0;
			return ((unsigned int)ft_strlen(src));
		}
		dest[c] = src[c];
		c++;
	}
	return ((unsigned int)ft_strlen(src));
}
