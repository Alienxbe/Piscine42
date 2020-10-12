/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.19.be>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 04:33:31 by mykman            #+#    #+#             */
/*   Updated: 2020/10/05 03:21:19 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

int		ft_list_size(t_list *begin_list);
t_list	*ft_list_last(t_list *begin_list);
t_list	*ft_list_push_strs(int size, char **strs);

t_list		*ft_create_elem(void *data)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	elem->data = data;
	elem->next = 0;
	return (elem);
}

int					main(void)
{
	char	*strs[3];
	t_list	*begin_list;

	strs[0] = "Bonjour";
	strs[1] = "Comment";
	strs[2] = "TU VAS ????";

	begin_list = ft_list_push_strs(3, strs);

	while (begin_list)
	{
		printf("%s\n", (char *)begin_list->data);
		begin_list = begin_list->next;
	}

	return (0);
}