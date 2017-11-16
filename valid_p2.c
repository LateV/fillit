
#include "fillit.h"

int		valid_p2(char *buf)
{
	int i;
	int j;
	char *p;

	i = 0;
	j = 0;

	p = (char*)malloc(sizeof(char) * 20);
	while(buf[i] != '\0')
	{
		while(j != 20)
		{
			p[j] = buf[i];
			j++;
			i++; 
		}
		p[j] = '\0';
		if(v_patAll(p) == 1)
		{
			free(p);
			return(1);
		}
		j = 0;
		i = i + 1;
	}
	free(p);
	return (0);
}