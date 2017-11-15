
#include "fillit.h"

char fill_str(t_fill arr,char buf, int n, int m, int j)
{
		if (buf == '.')
			arr.tab[m][n] = 0;
		if (buf == '#')
			arr.tab[m][n] = 1;
	return(buf);
}