#include "fillit.h"

int		v_pat6(char *p)
{
	int		a;
	int		i;
	char	vp[4][21];

	i = 0;
	ft_strcpy(vp[0], "####\n....\n....\n....\n");
	ft_strcpy(vp[1], "....\n####\n....\n....\n");
	ft_strcpy(vp[2], "....\n....\n####\n....\n");
	ft_strcpy(vp[3], "....\n....\n....\n####\n");
	while (i != 4)
	{
		a = (ft_strcmp(p, vp[i])) ? 0 : 1;
		if (a == 1)
			return (1);
		i++;
	}
	return (0);
}
