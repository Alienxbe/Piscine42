/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 02:34:04 by mykman            #+#    #+#             */
/*   Updated: 2020/09/28 04:14:08 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int length, int (*f)(char*))
{
	int not_null;
	int i;

	not_null = 0;
	i = -1;
	while (++i < length)
		if ((*f)(tab[i]))
			not_null++;
	return (not_null);
}
