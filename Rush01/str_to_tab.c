/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_to_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 16:47:49 by mykman            #+#    #+#             */
/*   Updated: 2020/09/20 17:03:38 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

int		str_to_tab(char *str, int *tab)
{
	int i;

	if (ft_strlen(str) != 31)
		return (0);
	i = 0;
	while (*str)
	{
		if ((*str >= '1' && *str <= '4') || *str == ' ')
		{
			if (*str >= '1' && *str <= '4')
				tab[i++] = *str - '0';
			str++;
		}
		else
			return (0);
	}
	return (1);
}
