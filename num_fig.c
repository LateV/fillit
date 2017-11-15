
#include "fillit.h" 

int		num_fig(char *buf)
{
	int i;
	char ch;
	int r;

	i = 0;
	r = 1;
	while (buf[i] != '\0')
	{
		if (ch == 10 && buf[i] == 10)
			r++;
		ch = buf[i];
		i++;
	}
	return (r);
}