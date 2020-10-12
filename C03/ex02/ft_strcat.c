/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 18:54:22 by mykman            #+#    #+#             */
/*   Updated: 2020/09/15 23:23:48 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int dest_size;
	int src_size;

	i = -1;
	dest_size = 0;
	src_size = 0;
	while (dest[++i])
		dest_size++;
	i = -1;
	while (src[++i])
		src_size++;
	i = dest_size - 1;
	while (++i < dest_size + src_size)
		dest[i] = src[i - dest_size];
	dest[i] = 0;
	return (dest);
}
