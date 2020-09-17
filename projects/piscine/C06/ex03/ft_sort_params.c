/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 15:55:11 by mykman            #+#    #+#             */
/*   Updated: 2020/09/17 16:06:43 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 12:14:30 by mykman            #+#    #+#             */
/*   Updated: 2020/09/17 15:54:52 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int c;

	c = 0;
	while (s1[c] == s2[c] && s1[c] && s2[c])
		c++;
	return (s1[c] - s2[c]);
}

int	ft_iteration_str(char *str, char **list_str, int len_list_str)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (++i < len_list_str)
	{
		printf("%s | ", list_str[i]);
		if (list_str[i] == str)
		{
			printf("%s\n", list_str[i]);
			c++;
		}
	}
	return (c);
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	int k;
	int min;
	int index_min;
	int min_out;

	i = 1;
	min_out = -1;
	while (i < argc) //boucle qui enleve i ppt
	{
		j = 0;
		min = 600;
		while (++j < argc) // Min Function 
		{
			if (ft_strcmp(argv[j], "\0") < min && ft_strcmp(argv[j], "\0") > min_out)
			{
				min = ft_strcmp(argv[j], "\0");
				index_min = j;
			} 
		}
		min_out = min;
		k = -1;
		while (++k < ft_iteration_str(argv[index_min], argv, argc))
		{
			//printf("%d %s\n", min, argv[index_min]);
			i++;
		}
		printf("\n");

	}
	return (0);
}
