#ifndef FILLIT_H
# define FILLIT_H
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "libft.h"
#include <stdio.h>

typedef struct	s_fill
{
int tab[4][4];
char bukva;
}				t_fill;


char fill_str(t_fill arr,char buf, int n, int m, int j);


t_fill *ft_read_f(int ac, char **av);
t_fill *ft_fillStr(char *buf,t_fill *arr, int i, char term, char ch);

int		num_fig(char *buf);
int		valid_ch(char *buf);
int		valid_p1(char *buf);
int 	ft_valid(char **av);

#endif