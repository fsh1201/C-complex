#include <math.h>
#include <stdlib.h>
#include <stdio.h>

#define pi 3.1415926535897932	//圆周率

typedef struct {
	double re;
	double im;
} mc;

/*新复数*/
mc* cnew(double re, double im);
/*arctan(y/x)*/
double arctan(double y, double x);
/*模*/
double cmod(mc* a);
/*共轭*/
mc* ccon(mc* a);
/*复数a+b*/
mc* cplus(mc* a, mc* b);
/*复数a-c*/
mc* cminus(mc* a, mc* b);
/*复数a*b*/
mc* cpro(mc* a, mc* b);
/*复数a/b*/
mc* cdiv(mc* a, mc* b);
/*复数Ln(a)*/
mc* Ln(mc* a);
/*复数loga(b)*/
mc* Log(mc* a, mc* b);
/*复数a^b*/
mc* cpow(mc* a, mc* b);
/*打印复数a*/
void cprint(mc* a);