/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 08:08:07 by mykman            #+#    #+#             */
/*   Updated: 2020/09/12 09:07:40 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int n;
	int i;

	n = 0;
	i = 1;
	while (i == 1)
	{
		if (str[n] == 0)
		{
			i = 0;
			n--;
		}
		n++;
	}
	return (n);
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
