/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 20:49:44 by mykman            #+#    #+#             */
/*   Updated: 2020/09/30 18:11:27 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_rev_int_tab(int *tab, int size);
void	ft_sort_int_tab(int *tab, int size);

int		main(void)
{
	int i;
	int tab[] = {1, 7, 2, 5, 9, 0, 6};

	ft_sort_int_tab(tab, 8);
	i = -1;
	while (++i < 7)
		printf("%d\n", tab[i]);
	return (0);
}
