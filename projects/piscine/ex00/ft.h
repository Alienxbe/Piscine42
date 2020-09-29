/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 13:01:24 by rcammaro          #+#    #+#             */
/*   Updated: 2020/09/27 23:15:39 by rcammaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

# define BUF_SIZE 4096

typedef struct	s_number
{
	char	*name;
	int		value;
	int		mode;
}				t_nbr;

char			**ft_split(char *str, char *charset);
char			*ft_strjoin(int size, char **strs, char *sep);
char			*ft_strcat(char *dest, char *src);
char			*ft_strcpy(char *dest, char *src);
int				ft_strlen(char *str);
char			*read_file(char *file_name);
t_nbr			*load_dictionary(char *dict_file);
t_nbr			*ft_str_to_sdic(char *str);
void			ft_putstr(char *str);
char			*number_to_text(int nbr, t_nbr *array);
char			*lookup_dict(int nbr, t_nbr *array);
char			*read_0_19(int nbr, t_nbr *array);
char			*read_20_99(int nbr, t_nbr *array);
char			*read_100_999(int nbr, t_nbr *array);
char			*get_next(int nbr, t_nbr *array);
void			cat_100_999(char *str, char *digit, char *hundred, char *next);
int				ft_atoi(char *str);
int				error_usage(void);
int				dict_error(void);
void			*error_malloc(void);
int				ft_atoin(char *str, int n);
void			free_dict(t_nbr *array);
void			free_split(char **array);
int				free_and_return(char *str);
t_nbr			*free_and_return_ptr(char *str);
int				ft_str_is_numeric(char *str);
int				ft_str_is_printable(char *str);
int				gen_output_text(char *str, t_nbr *array);

#endif
