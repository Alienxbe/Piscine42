/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_std_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcammaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 13:27:55 by rcammaro          #+#    #+#             */
/*   Updated: 2020/09/27 15:03:21 by rcammaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*read_stdin(char *str)
{
	int		ret;

	ret = read(0, str, BUF_SIZE);
	if (ret == -1)
		return (0);
	str[ret] = '\0';
	return (str);
}
