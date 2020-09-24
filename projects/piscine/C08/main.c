/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 09:55:29 by mykman            #+#    #+#             */
/*   Updated: 2020/09/23 10:17:28 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

struct s_stock_str	ft_str_to_struct(char *str);

int		main(void)
{
	t_stock_str	structure;
	char		str[] = "Bonjour";

	structure = ft_str_to_struct(str);
	printf("test");
	free(structure.copy);
	return (0);
}
