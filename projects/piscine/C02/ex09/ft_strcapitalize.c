/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 19:33:55 by mykman            #+#    #+#             */
/*   Updated: 2020/09/12 20:18:44 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int c;


	c = 0;
	if (!(*str))
		return (1);
	while (str[c] != 0)
	{
		if (!((str[c] > 64 && str[c] < 91) || (str[c] > 96 && str[c] < 123)))
			return (1);
		c++;
	}
	return (0);
}

int		ft_str_is_numeric(char *str)
{
	int c;

	c = 0;
	while (str[c] != 0)
	{
		if (!(str[c] > 47 && str[c] < 58))
			return (1);
		c++;
	}
	return (0);
}

int		ft_str_is_alphanum(char *str)
{
	if (ft_str_is_alpha || ft_str_is_numeric)
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char *s;

	s = src;
	while (*s)
	{
		
	}
}
