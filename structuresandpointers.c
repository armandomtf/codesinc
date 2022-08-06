#include <stdio.h>

struct complex{
	float real;
	float imag;
};
void printComplex(struct complex *cp);
struct complex complexAdd(struct complex *cp1,struct complex *cp2);
int main() {
	struct complex c1={3.2,4},c2={1.2,5},c3;	
	printComplex(&c1);
	c3=complexAdd(&c1,&c2);
	printComplex(&c3);
	
	return 0;
}

void printComplex(struct complex *cp){
	printf("\n%.2f + i%.2f\n",cp->real,cp->imag);	
	return;
}

struct complex complexAdd(struct complex *cp1,struct complex *cp2){
	struct complex sum;
	sum.real=cp1->real+cp2->real;
	sum.imag=cp1->imag+cp2->imag;
	return sum;
}
