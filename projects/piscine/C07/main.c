/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 18:51:11 by mykman            #+#    #+#             */
/*   Updated: 2020/10/01 16:33:51 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *src);
int		*ft_range(int min, int max);
int		ft_ultimate_range(int **range, int min, int max);
char	*ft_strjoin(int size, char **strs, char *sep);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
char	**ft_split(char *src, char *charset);
int		ft_tot_len(int size, char **strs, char *sep);
int		ft_word_count(char *str, char *charset);

int		main(void)
{
	char **tab;
	char *str = "Bonjour comment tu va ";

	tab = ft_split(str, " ");
	printf("%s\n", ft_strjoin(4, tab, ", "));
	return (0);
}
