/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vibondar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 15:34:00 by vibondar          #+#    #+#             */
/*   Updated: 2017/11/18 15:34:01 by vibondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "libft/libft.h"

typedef struct	s_fill
{
	int		x[4];
	int		y[4];
	char	bukva;
}				t_fill;

t_fill			*ft_fillstr(char **buf, t_fill *arr, int i, int j);
t_fill			*ft_read_f(int ac, char **av, int *len);

void			ft_place_it(t_fill hren, char **map, int y, int x);
void			ft_resize_square(t_fill *hren, int len);
void			ft_delete(t_fill hren, char **map);

int				ft_fill_square(t_fill *hren, char **map, int i, int len);
int				ft_can_place(t_fill hren, char **map, int y, int x);
int				ft_valid(char **av);
int				valid_ch(char *buf);
int				valid_p1(char *buf);
int				valid_p2(char *buf);
int				num_fig(char *buf);
int				v_patall(char *p);

#endif
