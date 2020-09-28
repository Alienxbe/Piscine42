/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 04:06:50 by mykman            #+#    #+#             */
/*   Updated: 2020/09/28 04:21:45 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char*))
{
	char	**ptr;

	ptr = tab;
	while (*(ptr + 1))
	{
		if ((*cmp)(*ptr, *(ptr + 1)) > 0)
		{
			ft_swap(ptr, ptr + 1);
			ptr = tab;
		}
		ptr++;
	}
}
