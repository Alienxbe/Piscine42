/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 14:56:16 by mykman            #+#    #+#             */
/*   Updated: 2020/09/19 15:40:06 by mykman           ###   ########.fr       */
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

int		ft_str_to_tab(char *str, int *tab)
{
	int n;
	int i;

	if (ft_strlen(str) != 31)
		return (0);
	i = 0;
	while (*str)
	{
		if ((*str >= '1' && *str <= '4') || *str == ' ')
		{
			if (*str >= '1' && *str <= '4')
			{
				n = *str - '0';
				tab[i++] = n;
			}
			str++;
		}
		else
			return (0);
	}
	return (16);
}
