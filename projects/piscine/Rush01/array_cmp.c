/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_cmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 18:11:51 by mykman            #+#    #+#             */
/*   Updated: 2020/09/20 18:38:28 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		array_cmp(int l1[16], int l2[16])
{
	int i;

	i = -1;
	while (++i < 16)
	{
		if (l1[i] != l2[i])
			return (0);
	}
	return (1);
}
