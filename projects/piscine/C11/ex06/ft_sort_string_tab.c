/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 03:57:56 by mykman            #+#    #+#             */
/*   Updated: 2020/10/01 21:41:46 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

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

void	ft_sort_string_tab(char **tab)
{
	char	**ptr;

	ptr = tab;
	while (*(ptr + 1))
	{
		if (ft_strcmp(*ptr, *(ptr + 1)) > 0)
		{
			ft_swap(ptr, ptr + 1);
			ptr = tab - 1;
		}
		ptr++;
	}
}
