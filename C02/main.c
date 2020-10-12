/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 15:38:17 by mykman            #+#    #+#             */
/*   Updated: 2020/10/01 14:05:12 by mykman           ###   ########.fr       */
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
	char dest[10];
	char *src = "Oui !";

	printf("%d\n", ft_strlcpy(dest, src, 10));
	printf("%s\n", dest);
	return (0);
}
