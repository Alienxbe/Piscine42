/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 22:52:34 by mykman            #+#    #+#             */
/*   Updated: 2020/10/01 01:29:17 by mykman           ###   ########.fr       */
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
		if (*str)
			wc += 1;
		while (*str && !ft_is_separator(*str, charset))
			str++;
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

char	*ft_word_copy(char *str, char *charset)
{
	char	*word;
	int		i;

	if (!(word = malloc(sizeof(char) * (ft_word_size(str, charset) + 1))))
		return (0);
	i = -1;
	while (++i < ft_word_size(str, charset))
		word[i] = str[i];
	word[i] = 0;
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		wc;
	int		i;

	wc = ft_word_count(str, charset);
	if (!(tab = malloc(sizeof(char *) * (wc + 1))))
		return (0);
	i = -1;
	while (*str)
	{
		while (*str && ft_is_separator(*str, charset))
			str++;
		if (*str)
		{
			tab[++i] = ft_word_copy(str, charset);
			str += ft_word_size(str, charset);
		}
	}
	tab[++i] = 0;
	return (tab);
}
