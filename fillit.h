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
int 	ft_valid(char **av);
int		valid_ch(char *buf);
int		valid_p1(char *buf);
int		valid_p2(char *buf);
int 	v_patAll(char *p);
int 	v_patAll1(char *p);
int		v_patAll2(char *p);
int		v_pat1(char *p);
int		v_pat2(char *p);
int		v_pat3(char *p);
int		v_pat4(char *p);
int		v_pat5(char *p);
int		v_pat6(char *p);
int		v_pat7(char *p);
int		v_pat8(char *p);
int		v_pat9(char *p);
int		v_pat10(char *p);
int		v_pat11(char *p);
int		v_pat12(char *p);
int		v_pat13(char *p);
int		v_pat14(char *p);
int		v_pat15(char *p);
int		v_pat16(char *p);
int		v_pat17(char *p);
int		v_pat18(char *p);
int		v_pat19(char *p);

#endif