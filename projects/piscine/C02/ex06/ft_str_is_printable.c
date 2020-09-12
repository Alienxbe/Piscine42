/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 16:40:33 by mykman            #+#    #+#             */
/*   Updated: 2020/09/12 16:41:57 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int c;
	int out;

	c = 0;
	out = 1;
	while (str[c] != 0)
	{
		if (!(str[c] > 31 && str[c] < 127))
			out = 0;
		c++;
	}
	return (out);
}
