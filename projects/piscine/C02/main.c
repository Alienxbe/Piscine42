/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 15:38:17 by mykman            #+#    #+#             */
/*   Updated: 2020/09/23 22:48:55 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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
void			*ft_print_memory(void *addr, unsigned int size);

int		main(void)
{
	ft_putstr_non_printable("POURQUO\e\r\t\v\f\nI?");
	return (0);
}
