
#include "fillit.h"

int v_patAll1(char *p)
{
	int a;

	a = (v_pat8(p)) ? 1 : 0;
	if (a)
		return (0);
	a = (v_pat9(p)) ? 1 : 0;
	if (a)
		return (0);
	a = (v_pat10(p)) ? 1 : 0;
	if (a)
		return (0);
	a = (v_pat11(p)) ? 1 : 0;
	if (a)
		return (0);
	a = (v_pat12(p)) ? 1 : 0;
	if (a)
		return (0);
	a = (v_pat13(p)) ? 1 : 0;
	if (a)
		return (0);
	a = (v_pat14(p)) ? 1 : 0;
	if (a)
		return (0);
	return (v_patAll2(p));
}
