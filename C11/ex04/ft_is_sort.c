/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 02:37:05 by mykman            #+#    #+#             */
/*   Updated: 2020/10/01 19:22:47 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int r;
	int r2;

	i = 1;
	while (i < length && !(r = f(tab[i - 1], tab[i])))
		i++;
	while (i < length)
	{
		r2 = f(tab[i - 1], tab[i]);
		if ((r < 0 && r2 > 0) || (r > 0 && r2 < 0))
			return (0);
		i++;
	}
	return (1);
}
