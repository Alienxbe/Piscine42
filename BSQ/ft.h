/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 04:01:44 by mykman            #+#    #+#             */
/*   Updated: 2020/09/29 06:35:47 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
#define FT_H

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*ft_read_file(char *file_path);
int		ft_file_size(char *file_path);
int		ft_error(int value, char *type, char *message);
int		ft_nofile_error();
char	*ft_fileopen_error();
char	*ft_malloc_error();

#endif