/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 12:06:28 by mykman            #+#    #+#             */
/*   Updated: 2020/09/15 15:41:21 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strncat(char *dest, char *src, unsigned int nb);
char			*ft_strstr(char *str, char *to_find);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int		main(void)
{
	char str1[12] = "trou";
	char str2[3] = "ve";
	char str3[12] = "trou";
	char str4[3] = "ve";
	int size = 12;
	
	printf("%d || %lu : %s  |  ", size, strlcat(str1, str2, size), str1);
	printf("%d : %s\n", ft_strlcat(str3, str4, size), str3);
	return (0);
}
