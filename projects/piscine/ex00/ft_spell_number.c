/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spell_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcammaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 20:21:10 by rcammaro          #+#    #+#             */
/*   Updated: 2020/09/27 22:52:53 by rcammaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*get_thousands(int nbr, t_nbr *array)
{
	while (!(array->value == nbr && array->mode == 1))
	{
		if (array->mode == -1)
		{
			ft_putstr("Dict Error\n");
			return (0);
		}
		array++;
	}
	return (array->name);
}

void	append(char *sp_num, char *sp_thous, char *output_text)
{
	if (ft_strlen(output_text))
		ft_strcat(output_text, " ");
	ft_strcat(output_text, sp_num);
	if (sp_thous)
	{
		ft_strcat(output_text, " ");
		ft_strcat(output_text, sp_thous);
	}
}

int		ft_spell_number(char *str, char *output_text, t_nbr *array)
{
	int		len;
	int		nbr;
	int		shift;
	char	*spelled_nb;
	char	*spelled_thous;

	len = ft_strlen(str);
	shift = (len % 3) ? (len % 3) : 3;
	while (*str)
	{
		nbr = ft_atoin(str, shift);
		if (!(spelled_nb = number_to_text(nbr, array)))
			return (0);
		spelled_thous = 0;
		if (len > 3)
			if (!(spelled_thous = get_thousands(len - shift + 3, array)))
				return (free_and_return(spelled_nb));
		if (nbr || len == 1)
			append(spelled_nb, spelled_thous, output_text);
		free(spelled_nb);
		str = str + shift;
		len = len - shift;
		shift = 3;
	}
	return (1);
}

int		gen_output_text(char *str, t_nbr *array)
{
	char	output_text[BUF_SIZE];

	if (!(ft_str_is_numeric(str)))
	{
		ft_putstr("Error\n");
		return (0);
	}
	*output_text = '\0';
	if (!(ft_spell_number(str, output_text, array)))
		return (0);
	ft_putstr(output_text);
	ft_putstr("\n");
	return (1);
}
