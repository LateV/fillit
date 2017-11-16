#include "fillit.h"

int		v_pat19(char *p)
{
	int		a;
	int		i;
	char	vp[9][21];

	i = 0;
	ft_strcpy(vp[0], "##..\n##..\n....\n....\n");
	ft_strcpy(vp[1], ".##.\n.##.\n....\n....\n");
	ft_strcpy(vp[2], "..##\n..##\n....\n....\n");
	ft_strcpy(vp[3], "....\n##..\n##..\n....\n");
	ft_strcpy(vp[4], "....\n.##.\n.##.\n....\n");
	ft_strcpy(vp[5], "....\n..##\n..##\n....\n");
	ft_strcpy(vp[6], "....\n....\n##..\n##..\n");
	ft_strcpy(vp[7], "....\n....\n.##.\n.##.\n");
	ft_strcpy(vp[8], "....\n....\n..##\n..##\n");
	while (i != 9)
	{
		a = (ft_strcmp(p, vp[i])) ? 0 : 1;
		if (a == 1)
			return (1);
		i++;
	}
	return (0);
}
