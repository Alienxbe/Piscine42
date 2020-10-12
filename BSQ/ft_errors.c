/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 04:10:01 by mykman            #+#    #+#             */
/*   Updated: 2020/09/29 04:35:22 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_nofile_error()
{
	return(ft_error(1, "NoFileError", "No input file"));
}

char	*ft_fileopen_error()
{
	ft_error(0, "FileError", "Failed at file opening");
	return (0);
}

char	*ft_malloc_error()
{
	ft_error(0, "MemoryAllocationError", "Malloc error");
	return(0);
}

int		ft_error(int value, char *type, char *message)
{
	ft_putstr(type);
	ft_putstr(" :\t");
	ft_putstr(message);
	ft_putchar('\n');
	return (value);
}