/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcammaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 17:38:29 by rcammaro          #+#    #+#             */
/*   Updated: 2020/09/27 13:18:29 by rcammaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		is_sep(char *charset, char c)
{
	while (*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

char	*get_next_word(char *str, char *charset)
{
	while (*str && is_sep(charset, *str))
		str++;
	return (str);
}

int		count_words(char *str, char *charset)
{
	int counter;

	counter = 0;
	str = get_next_word(str, charset);
	while (*str)
	{
		counter++;
		while (*str && !is_sep(charset, *str))
			str++;
		str = get_next_word(str, charset);
	}
	return (counter);
}

int		word_len(char *word, char *charset)
{
	int	len;

	len = 0;
	while (*word && !is_sep(charset, *word))
	{
		len++;
		word++;
	}
	return (len);
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	char	*ptr;
	int		n_words;
	int		i;

	n_words = count_words(str, charset);
	if (!(array = malloc(sizeof(*array) * (n_words + 1))))
		return (0);
	i = -1;
	while (++i < n_words)
	{
		str = get_next_word(str, charset);
		if (!(array[i] = malloc(sizeof(char) * (word_len(str, charset) + 1))))
			return (0);
		ptr = array[i];
		while (*str && !is_sep(charset, *str))
			*ptr++ = *str++;
		*ptr = '\0';
	}
	array[i] = 0;
	return (array);
}
