/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 04:01:24 by mykman            #+#    #+#             */
/*   Updated: 2020/09/29 07:08:48 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_file_size(char *file_path)
{
	char	buffer;
	int		fd;
	int		size;

	size = 0;
	if ((fd = open(file_path, O_RDONLY)) == -1)
		return (-1);
	while (read(fd, &buffer, sizeof(buffer)))
		size++;
	close(fd);
	return (size);
}

char	*ft_read_file(char *file_path)
{
	char	*str;
	int		fd;
	int		size;

	if ((size = ft_file_size(file_path)) == -1)
		return (ft_fileopen_error());
	if (!(str = malloc(sizeof(*str) * (size + 1))))
		return (ft_malloc_error());
	if ((fd = open(file_path, O_RDONLY)) == -1)
		return (ft_fileopen_error());
	read(fd, str, size);
	str[size] = '\0';
	close(fd);
	return (str);
}