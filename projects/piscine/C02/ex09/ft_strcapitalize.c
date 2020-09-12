/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 19:33:55 by mykman            #+#    #+#             */
/*   Updated: 2020/09/12 22:59:25 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_alphanum(char c)
{
	if (c >= '0' && c <= '9' || \
			c >= 'A' && c <= 'Z' || \
			c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int c;
	int first_letter;

	c = 0;
	while (str[c])
	{
		first_letter = 1;
		while (ft_str_is_alphanum(str[c]))
		{
			if (first_letter)
			{
				str[c] = 
				first_letter = 0;
			}
			else
				l;
			c++;
		}
		c++;
	}
	return (str);
}
