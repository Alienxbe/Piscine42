/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 22:52:34 by mykman            #+#    #+#             */
/*   Updated: 2020/09/21 23:34:27 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_separator(char c, char *charset)
{
	while (*charset)
		if (*charset++ == c)
			return (1);
	return (0);
}

int		ft_word_count(char *str, char *charset)
{
	int wc;

	wc = 0;
	while (*str)
	{
		while (*str && ft_is_separator(*str, charset))
			str++;
		while (*str && !ft_is_separator(*str, charset))
			str++;
		wc += 1;
	}
	return (wc);
}

int		ft_word_size(char *str, char *charset)
{
	int i;

	i = 0;
	while (*str && !ft_is_separator(*str++, charset))
		i++;
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	char	*word;
	int		wc;
	int		i;
	int		j;

	wc = ft_word_count(str, charset);
	tab = malloc(sizeof(char *) * wc);
	i = -1;
	while (*str)
	{
		while (*str && ft_is_separator(*str, charset))
			str++;
		word = malloc(sizeof(char) * ft_word_size(str, charset));
		j = -1;
		while (++j < ft_word_size(str, charset))
			word[j] = str[j];
		word[j] = 0;
		tab[i] = word;
		str += ft_word_size(str, charset);
	}
	return (tab);
}
