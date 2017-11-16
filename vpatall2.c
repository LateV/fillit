#include "fillit.h"

int v_patAll2(char *p)
{
	int a;

	a = (v_pat15(p)) ? 1 : 0;
	if (a)
		return (0);
	a = (v_pat16(p)) ? 1 : 0;
	if (a)
		return (0);
	a = (v_pat17(p)) ? 1 : 0;
	if (a)
		return (0);
	a = (v_pat18(p)) ? 1 : 0;
	if (a)
		return (0);
	a = (v_pat19(p)) ? 1 : 0;
	if (a)
		return (0);
	return (1);
}
