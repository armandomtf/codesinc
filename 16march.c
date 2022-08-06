#include <stdio.h>

float doubling(float x);
float p_doubling(float *fpx);
int main() {
	float a,b;
	printf("Pls, enter a number to double:\n");
	scanf("%f",&a);
	
	b=doubling(a);
	printf("%.2f*2= %.2f\n",a,b);
	
	b=p_doubling(&a);
	printf("%.2f*2= %.2f\n",a,b);
	return 0;
}

float doubling(float x){
	float y;
	y=2*x;
	return y;
}

float p_doubling(float *fpx){
	float y;
	y=2*(*fpx);
	*fpx=3*(*fpx);
	return y;
}
