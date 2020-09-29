/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 16:40:33 by rcammaro          #+#    #+#             */
/*   Updated: 2020/09/27 23:08:04 by rcammaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	char	*nbr;
	char	*dict_file;
	t_nbr	*array;

	if (argc > 3)
		return (error_usage());
	if (argc == 1)
		return (error_usage());
	else
		nbr = argv[argc - 1];
	dict_file = (argc == 3) ? argv[1] : "numbers.dict";
	if (!(array = load_dictionary(dict_file)))
		return (1);
	if (!gen_output_text(nbr, array))
	{
		free_dict(array);
		return (1);
	}
	free_dict(array);
	return (0);
}
