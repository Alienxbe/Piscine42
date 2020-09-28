/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcammaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 16:40:33 by rcammaro          #+#    #+#             */
/*   Updated: 2020/09/26 20:08:05 by rcammaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */





#include "ft.h"

int	main(void)
{
	char	*dict;
	t_nbr	*array;
	char	*number_text;

	dict = read_file("numbers.dict.txt");
	array = ft_str_to_sdic(dict);

	int	i = 0;
	while (i < 1000)
	{
		number_text = number_to_text(i, array);
		ft_putstr(number_text);
		ft_putstr("\n");
		i++;
	}

}
