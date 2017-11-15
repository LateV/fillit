
#include "fillit.h"

int		valid_p1(char *buf)
{
	int i;
	int m;
	int n;

	i = 0;
	n = 0;
	m = 0;
	while (buf[i] != '\0')
	{
		while(buf[i] != '\0')
		{
			while(buf[i] != '\n' && buf[i] != '\0')
			{
				i++;
				n++;
			}
			if(n != 4 || (n == 4 && buf[i] == '\0'))
				return (1);
			if (buf[i + 1] == '\0' && m == 3)
				return(0);
			if (buf[i + 1] == '\0' && m != 3)
				return(1);
			if (m == 3)
				break;
				n = 0;
				i = i + 1;
				m++;
		}
		n = 0;
		i = i + 2;
		m = 0;
	}
	return (1);
}