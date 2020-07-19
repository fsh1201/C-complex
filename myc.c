#include "myc.h"

mc* cnew(double re, double im)
{
	mc* c;
	c = (mc*)malloc(sizeof(mc));
	c->re = re;
	c->im = im;
	return c;
}

double arctan(double y, double x)
{
	double t;
	if (x > 0)
	{
		if (y > 0)
		{
			t = atan(y / x);
		}
		else
		{
			t = atan(y / x) + 2 * pi;
		}
	}
	else
	{
		t = atan(y / x) + pi;
	}
	return t;
}

double cmod(mc* a)
{
	double s = sqrt(pow(a->re, 2) + pow(a->im, 2));
	return s;
}

mc* ccon(mc* a)
{
	mc* c;
	c = (mc*)malloc(sizeof(mc));
	c->im = -a->im;
	c->re = a->re;
	return c;
}

mc* cplus(mc* a, mc* b)
{
	mc* c;
	c = (mc*)malloc(sizeof(mc));
	c->im = a->im + b->im;
	c->re = a->re + b->re;
	return c;
}

mc* cminus(mc* a, mc* b)
{
	mc* c;
	c = (mc*)malloc(sizeof(mc));
	c->re = a->re - b->re;
	c->im = a->im - b->im;
	return c;
}

mc* cpro(mc* a, mc* b)
{
	mc* c;
	c = (mc*)malloc(sizeof(mc));
	c->re = a->re * b->re - a->im * b->im;
	c->im = a->im * b->re + b->im * a->re;
	return c;
}

mc* cdiv(mc* a, mc* b)
{
	mc* bc;
	bc = ccon(b);
	mc* c;
	c = cpro(a, bc);
	c->re = c->re / pow(cmod(b), 2);
	c->im = c->im / pow(cmod(b), 2);
	free(bc);
	return c;
}

mc* Ln(mc* a)
{
	mc* c;
	c = (mc*)malloc(sizeof(mc));
	c->re = log(sqrt(pow(a->re, 2) + pow(a->im, 2)));
	c->im = arctan(a->im, a->re);
	return c;
}

mc* Log(mc* a, mc* b)
{
	mc* c;
	c = (mc*)malloc(sizeof(mc));
	mc* lnb, * lna;
	lnb = Ln(b);
	lna = Ln(a);
	c = cdiv(lna, lnb);
	free(lna);
	free(lnb);
	return c;
}

mc* cpow(mc* a, mc* b)
{
	mc* c;
	c = (mc*)malloc(sizeof(mc));
	mc* lna;
	lna = Ln(a);
	mc* blna;
	blna = cpro(b, lna);
	c->re = exp(blna->re) * cos(blna->im);
	c->im = exp(blna->re) * sin(blna->im);
	free(lna);
	free(blna);
	return c;
}

void cprint(mc* a)
{
	printf("%f + %fi\n", a->re, a->im);
}