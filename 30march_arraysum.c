#include <stdio.h>

void vectorSum(int *a, int *b, int *c, int n);
void printArray(int *a, int n);
int main() {
	int a[10]={1,4,9,0,12,33,19,5,21,29};
	int b[10]={12,5,6,0,14,7,22,43,50,10},c[10];
	
	vectorSum(a,b,c,10);
	printArray(c,10);
	return 0;
}

void vectorSum(int *a, int *b, int *c, int n){
	int i;
	for(i=0;i<n;i++){
		c[i]= a[i] + b[i];
	}
	
	return;
}

void printArray(int *a, int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
		if((i+1)%5==0){
			printf("\n");
		}
	}
return;
}
