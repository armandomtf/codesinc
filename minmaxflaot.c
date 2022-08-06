#include <stdio.h>
#include <stdlib.h>

void printArray(float *a, int n);
void sorting(float *a, int n);
int main() {
	int i;
	float a[1000];
	
	for(i=0;i<1000;i++){
		a[i]=(float)rand()/(float)RAND_MAX;
	}
	printf("Array:\n");
	printArray(a,1000);
	
	sorting(a,1000);
	printf("\nValue of the smallest element:\n");
	printf("%f",a[0]);
	printf("\nValue of the greatest element:\n");
	printf("%f",a[999]);
	
	return 0;	
}
void printArray(float *a, int n){
	int i;
	for(i=0;i<n;i++){
		printf("%.2f ",a[i]);
		if((i+1)%5==0){
			printf("\n");
		}
	}
return;
}

void sorting(float *a, int n){
	int i,j;
	float temp;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
return;
}

int randInt(int a, int b){
	int r;
	r=rand()%(b-a+1)+a;//random number in a closed interval
	return r;
}
