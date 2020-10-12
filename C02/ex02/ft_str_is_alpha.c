/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 09:28:30 by mykman            #+#    #+#             */
/*   Updated: 2020/09/12 22:10:28 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int c;

	c = 0;
	while (str[c])
	{
		if (!((str[c] > 64 && str[c] < 91) || (str[c] > 96 && str[c] < 123)))
			return (0);
		c++;
	}
	return (1);
}