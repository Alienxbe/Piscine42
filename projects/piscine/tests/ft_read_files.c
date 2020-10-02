/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_files.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 07:33:58 by mykman            #+#    #+#             */
/*   Updated: 2020/09/29 08:17:13 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/uio.h>
#include <sys/types.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_concatc(char *str, char c)
{
	char	*dest;
	int		i;

	dest = malloc(sizeof(char) * (ft_strlen(str) + 2));
	i = -1;
	while (str[++i])
		dest[i] = src[i];
	dest[i] = c;
	dest[i + 1] = 0;
	return (dest);
}

char	*ft_read_files(int fd)
{
	char *str;
	char c;

	str = "\0";
	c = 0;
	read(fd, &c, sizeof(char));
}

int main()
{
	
	return 0;
}