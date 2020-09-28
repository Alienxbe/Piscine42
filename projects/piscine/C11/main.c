/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 01:57:21 by mykman            #+#    #+#             */
/*   Updated: 2020/09/28 04:23:58 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_string_tab(char **tab);
void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char*));

int		ft_strcmp(char *s1, char *s2)
{
	int c;

	c = 0;
	while (s1[c] == s2[c] && s1[c] && s2[c])
	{
		c++;
	}
	return (s1[c] - s2[c]);
}

int		main(void)
{
	char	*tab[] = {"ab", "ad", "c", "b", "aa", 0};
	char	**ptr;

	ft_advanced_sort_string_tab(tab, &ft_strcmp);
	ptr = tab;
	while (*ptr)
		printf("%s\n", *ptr++);
	return (0);
}