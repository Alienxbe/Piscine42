/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 15:38:17 by mykman            #+#    #+#             */
/*   Updated: 2020/09/13 22:20:10 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int				ft_str_is_alpha(char *str);
int				ft_str_is_numeric(char *str);
int				ft_str_is_lowercase(char *str);
int				ft_str_is_uppercase(char *str);
int				ft_str_is_printable(char *str);
char			*ft_strupcase(char *str);
char			*ft_strlowcase(char *str);
char			*ft_strcapitalize(char *str);
void			ft_putstr_non_printable(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int		main(void)
{
	char str1[3] = "Bo";
	str1[2] = 127;
	//char str2[15];
	//unsigned int size = 30

	ft_putstr_non_printable(str1);
	return (0);
}
