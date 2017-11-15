
#include "fillit.h"

t_fill *ft_fillStr(char *buf,t_fill *arr, int i, char term, char ch)
{
	int m;
	int n;
	int j;

	n = 0;
	m = 0;
	j = 0;
	while (buf[j] != '\0')
	{	
		while (buf[j] != '\0')
		{
			//printf("%d\n", buf[j]);
			arr[i].bukva = term;
			if(buf[j] == 10 && ch == 10)
				break;
			if (buf[j] == '.')
				arr[i].tab[m][n] = 0;
			if (buf[j] == '#')
				arr[i].tab[m][n] = 1;
			n++;
			ch = buf[j];
			j++;
		}
		n = 0;
		m++;
		term++;
		i++;
		ch = 'i';
	}
	return(arr);
}