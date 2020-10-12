/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 01:57:21 by mykman            #+#    #+#             */
/*   Updated: 2020/10/01 21:21:00 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_string_tab(char **tab);
void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char*));

/*int		ft_strcmp(char *s1, char *s2)
{
	int c;

	c = 0;
	while (s1[c] == s2[c] && s1[c] && s2[c])
	{
		c++;
	}
	return (s1[c] - s2[c]);
}*/

int		main(void)
{
	char	*tab[] = {"Ro", "pv3EZLOY", "OulEh6", "IEJzqfMNLO", "txZduvcr3y", "MPbOlwSvnt2", "PSkv7af4", "emTplYk", "G", "diAkINZ8Batz", "CUuy", "EwoV1zZJDBA", "dB", "jwT6M", "YsKLofHDV", "dvCRHE", "jOLrmutN4wa", "1xSHyNoZDiRG", "fN1UdHEgb", 0};
	char	**ptr;

	ft_sort_string_tab(tab);
	ptr = tab;
	while (*ptr)
		printf("%s\n", *ptr++);
	return (0);
}