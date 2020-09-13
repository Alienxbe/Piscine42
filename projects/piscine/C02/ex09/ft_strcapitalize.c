/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 19:33:55 by mykman            #+#    #+#             */
/*   Updated: 2020/09/13 11:02:47 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_alphanum(char c)
{
	if ((c >= '0' && c <= '9') || \
			(c >= 'A' && c <= 'Z') || \
			(c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

void	ft_strcapitalize_conditions(char *str, int c, int first_letter)
{
	if (str[c] >= 'a' && str[c] <= 'z')
	{
		if (first_letter)
			str[c] -= 32;
	}
	else if (str[c] >= 'A' && str[c] <= 'Z')
	{
		if (!(first_letter))
			str[c] += 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int c;
	int first_letter;

	c = 0;
	while (str[c])
	{
		first_letter = 1;
		while (ft_char_is_alphanum(str[c]))
		{
			ft_strcapitalize_conditions(str, c, first_letter);
			if (first_letter)
				first_letter = 0;
			c++;
		}
		if (first_letter)
			c++;
	}
	return (str);
}
