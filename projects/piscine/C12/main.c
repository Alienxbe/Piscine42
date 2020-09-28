/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 04:33:31 by mykman            #+#    #+#             */
/*   Updated: 2020/09/28 05:16:20 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data);
int		ft_list_size(t_list *begin_list);
t_list	*ft_list_last(t_list *begin_list);

int					main(void)
{
	int n1 = 50;
	int n2 = 12;
	int n3 = 2;
	int n4 = 100;
	t_list *elem1;
	t_list *elem2;
	t_list *elem3;
	t_list *begin_list;

	elem1 = ft_create_elem(&n1);
	elem2 = ft_create_elem(&n2);
	elem3 = ft_create_elem(&n3);
	elem1->next = elem2;
	elem2->next = elem3;
	begin_list = elem1;

	ft_list_push_front(&begin_list, &n4);

	printf("%d\n", ft_list_size(begin_list));
	printf("%d\n", *(int *)ft_list_last(begin_list)->data);

	return (0);
}