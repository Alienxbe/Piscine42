/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 23:25:50 by mykman            #+#    #+#             */
/*   Updated: 2020/09/11 23:46:38 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int stop;

	i = 1;
	while (i == 1)
	{
		j = 0;
		stop = 0;
		while (j < size - 1 && stop == 0)
		{
			if (tab[j] > tab[j + 1])
			{
				ft_swap(&tab[j], &tab[j + 1]);
				stop = 1;
			}
			j++;
		}
		if (stop == 0)
		{
			i = 0;
		}
	}
}
