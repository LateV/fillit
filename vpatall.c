
#include "fillit.h"

int v_patAll(char *p)
{
	int a;
	a = (v_pat1(p)) ? 1 : 0;
	if (a)
		return (0);
	a = (v_pat2(p)) ? 1 : 0;
	if (a)
		return (0);
	a = (v_pat3(p)) ? 1 : 0;
	if (a)
		return (0);
	a = (v_pat4(p)) ? 1 : 0;
	if (a)
		return (0);
	a = (v_pat5(p)) ? 1 : 0;
	if (a)
		return (0);
	a = (v_pat6(p)) ? 1 : 0;
	if (a)
		return (0);
	a = (v_pat7(p)) ? 1 : 0;
	if (a)
		return (0);
	return (v_patAll1(p));
}
