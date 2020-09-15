/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 19:28:56 by mykman            #+#    #+#             */
/*   Updated: 2020/09/14 19:40:43 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int c1;
	unsigned int c2;

	c1 = 0;
	c2 = 0;
	while (dest[c1++])
	{
	}
	while (src[c2++] && c2 - 1 < nb)
		dest[c1 + c2 - 2] = src[c2 - 1];
	dest[c1 + c2 - 1] = 0;
	return (dest);
}
