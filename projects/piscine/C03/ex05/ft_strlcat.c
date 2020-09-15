/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 11:34:21 by mykman            #+#    #+#             */
/*   Updated: 2020/09/15 16:12:53 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int c1;
	int c2;
	int c3;

	c1 = 0;
	c2 = 0;
	c3 = 0;
	while (dest[c1++])
	{
	}
	c1--;
	while (src[c2++])
	{
	}
	c2--;
	if (c1 + c2 >= size)
		return (size + c2);
	else
		while (c3 < size - c2 - 1)
		{
			dest[c1 + c3] = src[c3];
			c3++;
		}
	return (c1 + c2);
}
