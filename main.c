#include "myc.h"

int main()
{
	mc* h1, * h2, * h3, * h4, * h5, * h6, * h7, * h8, * h9, * h10;
	h1 = cnew(1.0, 1.0);
	h2 = cnew(2.0, 2.0);
	h3 = cplus(h1, h2);
	h4 = cminus(h1, h2);
	h5 = cpro(h1, h2);
	h6 = cdiv(h1, h2);
	h7 = Ln(h1);
	h8 = Log(h1, h2);
	h9 = cpow(h1, h2);
	h10 = ccon(h2);
	cprint(h1);
	cprint(h2);
	cprint(h3);
	cprint(h4);
	cprint(h5);
	cprint(h6);
	cprint(h7);
	cprint(h8);
	cprint(h9);
	cprint(h10);
	printf("%f\n", cmod(h1));

	return 0;
}