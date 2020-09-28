/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 02:50:03 by mykman            #+#    #+#             */
/*   Updated: 2020/09/28 03:56:36 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_index(char c, char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		if (*str++ == c)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi(char *str)
{
	int neg;
	int num;

	neg = 0;
	num = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = !neg;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = 10 * num + (*str - '0');
		str++;
	}
	return (neg ? -num : num);
}

int		ft_operation_error(char *str)
{
	ft_putstr("Stop : ");
	ft_putstr(str);
	ft_putstr(" by zero\n");
	return (1);
}

int		ft_error_check(char **argv, char *operators, int b)
{
	if (ft_index(argv[2][0], operators) == -1)
	{
		ft_putnbr(0);
		return (1);
	}
	else if (ft_index(argv[2][0], operators) == 3 && b == 0)
		return (ft_operation_error("division"));
	else if (ft_index(argv[2][0], operators) == 4 && b == 0)
		return (ft_operation_error("modulo"));
	return (0);
}

int		main(int argc, char **argv)
{
	char	*operators;
	int		(*operations[5])(int, int);
	int		a;
	int		b;

	if (argc != 4)
		return (1);
	operators = "+-*/%";
	operations[0] = &ft_add;
	operations[1] = &ft_sub;
	operations[2] = &ft_mult;
	operations[3] = &ft_div;
	operations[4] = &ft_mod;
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (ft_error_check(argv, operators, b))
		return (1);
	ft_putnbr((*operations[ft_index(argv[2][0], operators)])(a, b));
	ft_putchar('\n');
	return (0);
}
