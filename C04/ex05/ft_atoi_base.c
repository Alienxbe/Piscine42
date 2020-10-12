/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:49:44 by mykman            #+#    #+#             */
/*   Updated: 2020/09/28 10:59:37 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

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

int		check_bad_base(char *base)
{
	char *ptr1;
	char *ptr2;

	ptr1 = base - 1;
	while (*++ptr1)
	{
		if ((*ptr1 >= 9 && *ptr1 <= 13) || *ptr1 == '+' || *ptr1 == '-'
			|| *ptr1 == ' ')
			return (1);
		ptr2 = base - 1;
		while (*++ptr2)
			if (*ptr1 == *ptr2 && ptr1 != ptr2)
				return (1);
	}
	return (0);
}

int		ft_atoi_base(char *str, char *base)
{
	int n;
	int neg;

	if (ft_strlen(base) < 2 || check_bad_base(base))
	{
		return (0);
	}
	n = 0;
	neg = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
		if (*(str++) == '-')
			neg = !neg;
	while (ft_index(*str, base) != -1)
		n = n * ft_strlen(base) + ft_index(*(str++), base);
	return (n ? -n : n);
}
