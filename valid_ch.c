
#include "fillit.h"

int valid_ch(char *buf)
{
	int i;

	i = 0;
	while (buf[i] != '\0')
	{
		if (buf[i] != '.')
			if (buf[i] != '#')
				if (buf[i] != '\n')
					return (1);
				i++	;	
	}
	return (0);
}