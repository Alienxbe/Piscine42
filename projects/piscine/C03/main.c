/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 12:06:28 by mykman            #+#    #+#             */
/*   Updated: 2020/09/16 10:53:36 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strcat(char *dest, char *src);
char			*ft_strncat(char *dest, char *src, unsigned int nb);
char			*ft_strstr(char *str, char *to_find);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int		main(void)
{
	char str1[20] = "bjr ";
	char str2[] = "twa";
	char str3[20] = "bjr ";
	char str4[] = "twa";
	//int size = 12;
	
	//printf("%d %d\n", strncmp(str1, str2, 5), ft_strncmp(str1, str2, 5));
	//printf("%s | %s\n", strcat(str1, str2), ft_strcat(str3, str4));
	printf("%d || %lu : %s  |  ", 5, strlcat(str1, str2, 6), str1);
	printf("%d : %s\n", ft_strlcat(str3, str4, 6), str3);
	return (0);
}
