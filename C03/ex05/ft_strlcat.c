/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 11:34:21 by mykman            #+#    #+#             */
/*   Updated: 2020/09/16 10:52:54 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int dest_size;
	unsigned int src_size;
	int i;

	dest_size = 0;
	src_size = 0;
	i = -1;
	while (dest[++i])
		dest_size++;
	i = -1;
	while (src[++i])
		src_size++;
	i = -1;
	if (dest_size + src_size > size)
		return (size + src_size);
	else
	{
		while ((unsigned int)++i < size - src_size - 1)
			dest[dest_size + i] = src[i];
		dest[dest_size + i] = 0;
	}
	return (dest_size + src_size);
}
