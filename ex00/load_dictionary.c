/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_dictionary.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 13:45:13 by rcammaro          #+#    #+#             */
/*   Updated: 2020/09/27 22:54:08 by rcammaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_nbr	*load_dictionary(char *dict_file)
{
	char	*dict_str;
	t_nbr	*array;

	if (!(dict_str = read_file(dict_file)))
		return (0);
	if (!(array = ft_str_to_sdic(dict_str)))
		return (0);
	return (array);
}
