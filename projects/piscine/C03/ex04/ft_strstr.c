/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 19:50:05 by mykman            #+#    #+#             */
/*   Updated: 2020/09/15 11:32:28 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int c1;
	int c2;

	c1 = 0;
	if (!(to_find[0]))
		return (str);
	while (str[c1++])
	{
		c2 = 0;
		while (str[c1 + c2 - 1] == to_find[c2])
		{
			if (!(to_find[c2 + 1]))
				return (&str[c1 - 1]);
			c2++;
		}
	}
	return (0);
}