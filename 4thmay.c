#include<stdio.h>
#include<stdlib.h>
#define N 10
#define MAX(a,b) ((a)>(b))?(a):(b)
#define DOUBLING(a) ((a)*2)
int main() {
	int a[N],b[N],i,greater;
	for(i=0;i<N;i++){
		a[i]=rand()%1000+1;
		b[i]=rand()%1000+1;
	}
	i=0;
	while(i<N){
		greater=MAX(a[i],b[i]);
		printf("%d %d %d\n",a[i],b[i],greater);
		printf("The double of %d is %d\n",a[i],DOUBLING(a[i]));
		i++;
	}
	return 0;
}
