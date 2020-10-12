/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formating.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 13:55:52 by mykman            #+#    #+#             */
/*   Updated: 2020/09/27 22:55:21 by rcammaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_arstrlen(char **str)
{
	int i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

int		ft_atoi(char *str)
{
	long int		ans;
	int				neg;

	neg = 0;
	ans = 0;
	while (*str == '+' || *str == '-')
		if (*(str++) == '-')
			neg++;
	while (*str >= '0' && *str <= '9')
		ans = (10 * ans) - '0' + *(str++);
	if (neg % 2)
		return (-ans);
	return (ans);
}

char	*format_name(char *str)
{
	char **splitted;
	char *joined;

	if (!(splitted = ft_split(str, " ")))
		return (0);
	joined = ft_strjoin(ft_arstrlen(splitted), splitted, " ");
	free_split(splitted);
	return (joined);
}

int		ft_line_to_dic(t_nbr *dic, char **line, int *i)
{
	char **number;

	if (ft_arstrlen(line) == 2 && ft_str_is_numeric(line[0])
		&& ft_str_is_printable(line[1]))
	{
		if (!(number = ft_split(line[0], " ")))
			return (0);
		if (ft_arstrlen(number) == 1)
		{
			if (!(dic[*i].name = format_name(line[1])))
				return (0);
			dic[*i].mode = (ft_strlen(line[0]) < 4) ? 0 : 1;
			if (dic[*i].mode)
				dic[*i].value = ft_strlen(number[0]) + 2;
			else
				dic[*i].value = ft_atoi(number[0]);
			*i = *i + 1;
		}
		free_split(number);
	}
	return (1);
}

t_nbr	*ft_str_to_sdic(char *str)
{
	char	**strs;
	char	**strs_cpy;
	char	**line;
	t_nbr	*dic;
	int		i;

	strs = ft_split(str, "\n");
	strs_cpy = strs;
	if (!(dic = malloc(sizeof(*dic) * (ft_arstrlen(strs) + 1))))
		return (free_and_return_ptr(str));
	i = 0;
	while (*strs)
	{
		if (!(line = ft_split(*strs++, ":")))
			return (free_and_return_ptr(str));
		if (!(ft_line_to_dic(dic, line, &i)))
			return (free_and_return_ptr(str));
		free_split(line);
	}
	dic[i].mode = -1;
	free_split(strs_cpy);
	free(str);
	return (dic);
}
