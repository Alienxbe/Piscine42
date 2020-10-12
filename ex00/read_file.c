/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcammaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 12:55:54 by rcammaro          #+#    #+#             */
/*   Updated: 2020/09/27 15:04:10 by rcammaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

#define BUF_SIZE 4096

int		file_size(char *file_name)
{
	int		fd;
	int		ret;
	int		char_count;
	char	buffer[BUF_SIZE];

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Dict Error\n");
		return (-1);
	}
	char_count = 0;
	while ((ret = read(fd, buffer, BUF_SIZE)))
	{
		if (ret == -1)
		{
			ft_putstr("Dict Error\n");
			return (-1);
		}
		char_count += ret;
	}
	close(fd);
	return (char_count);
}

char	*read_file(char *file_name)
{
	int		fd;
	char	*str;
	int		size;

	if ((size = file_size(file_name)) == -1)
		return (0);
	if (!(str = malloc(sizeof(char) * (size + 1))))
		return (0);
	fd = open(file_name, O_RDONLY);
	read(fd, str, size);
	str[size] = '\0';
	close(fd);
	return (str);
}
