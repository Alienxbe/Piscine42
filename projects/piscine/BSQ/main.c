/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 02:37:11 by mykman            #+#    #+#             */
/*   Updated: 2020/09/29 07:09:22 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft.h"

int main(int argc, char *argv[])
{
	char	*grid;
	int		i;
	
	i = 0;
	if (argc < 2)
		return (1);
	while (++i < argc)
	{
		if (!(grid = ft_read_file(argv[i])))
			return (1);
		ft_putstr(grid);
		ft_putchar('\n');
	}
	return (0);
}