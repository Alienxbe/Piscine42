/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 08:08:07 by mykman            #+#    #+#             */
/*   Updated: 2020/09/12 21:05:22 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int c;

	c = 0;
	while (str[c])
	{
		c++;
	}
	return (c);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	c = 0;
	while (c < n)
	{
		if (c >= (unsigned int)ft_strlen(src))
		{
			dest[c] = 0;
		}
		else
		{
			dest[c] = src[c];
		}
		c++;
	}
	return (dest);
}
