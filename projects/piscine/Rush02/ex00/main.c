/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 16:40:33 by rcammaro          #+#    #+#             */
/*   Updated: 2020/09/27 21:25:44 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	char	*nbr;
	char	*dict_file;
	t_nbr	*array;
	char	str_stdin[BUF_SIZE];

	if (argc > 3)
		return (error_usage());
	if (argc == 1)
	{
		if (!(nbr = read_stdin(str_stdin)))
			return (error_stdin());
	}
	else
		nbr = argv[argc - 1];
	dict_file = (argc == 3) ? argv[1] : "numbers.dict";
	if (!(array = load_dictionary(dict_file)))
		return (1);
	if (!(ft_check_input_to_text(nbr, array)))
		return (1);
	ft_input_to_text(nbr, array);
	ft_putstr("\n");
	free_dict(array);
	return (0);
}
