
#include "fillit.h"

t_fill *ft_read_f(int ac, char **av)
{
	int fd;	
	char *buf;
	t_fill *arr;
	ac = 1;
	buf = ft_strnew(600);
	fd = open(av[1],O_RDONLY);
	read(fd, buf, 600);
	arr = (t_fill*)malloc(sizeof(t_fill) * num_fig(buf));
	arr = ft_fillStr(buf, arr, 0, 'A', 'z');
	close(fd);
	free(buf);
	return(arr);
}