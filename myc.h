#include <math.h>
#include <stdlib.h>
#include <stdio.h>

#define pi 3.1415926535897932	//Բ����

typedef struct {
	double re;
	double im;
} mc;

/*�¸���*/
mc* cnew(double re, double im);
/*arctan(y/x)*/
double arctan(double y, double x);
/*ģ*/
double cmod(mc* a);
/*����*/
mc* ccon(mc* a);
/*����a+b*/
mc* cplus(mc* a, mc* b);
/*����a-c*/
mc* cminus(mc* a, mc* b);
/*����a*b*/
mc* cpro(mc* a, mc* b);
/*����a/b*/
mc* cdiv(mc* a, mc* b);
/*����Ln(a)*/
mc* Ln(mc* a);
/*����loga(b)*/
mc* Log(mc* a, mc* b);
/*����a^b*/
mc* cpow(mc* a, mc* b);
/*��ӡ����a*/
void cprint(mc* a);