
#include "fillit.h"

int ft_valid(char **av)
{
	int fd;	
	char *buf;

	buf = ft_strnew(600);
	fd = open(av[1],O_RDONLY);
	read(fd, buf, 600);
	if (valid_ch(buf) == 0)
		if(valid_p1(buf) == 0)
			if (valid_p2(buf) == 0)
			{
			free(buf);
			return (1);
			}
	free(buf);
	return (0);
}
