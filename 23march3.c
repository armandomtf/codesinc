#include <stdio.h>

void minmax(float a, float b, float *fpmin, float *fpmax);
int main() {
	float x,y,min,max;
	printf("pls enter 2 float numbers:\n");
	scanf("%f %f",&x,&y);
	minmax(x,y,&min,&max);
	printf("max=%.2f and min=%.2f",max,min);
	
	return 0;
}

void minmax(float a, float b, float *fpmin, float *fpmax){
	if(a>b){
		*fpmax=a;
		*fpmin=b;
	}else{
		*fpmax=b;
		*fpmin=a;
	}
	return;
}
