#include <stdio.h>
#include <stdlib.h>

float randFloat(float c, float d);

int main() {
	float a[100],b[100];
	float *ip,*ip2;
	int i;
	
	for(ip=&a[0];ip<=&a[99];ip++)
	{
		*ip=randFloat(0,1);
		printf("%f\n",*ip);
	}
	
	/*for(i=0;i<100;i++) //loop to the numbers copy in the usual way
	{
		b[i]=a[i];
		printf("b[%d]=%d\n",i,b[i]);
	}
	*/
	
	ip2=&b[0];
	for(ip=&a[0];ip<=&a[99];ip++);//loop to copy the numbers with pointers
	{
		*ip2=*ip;
		ip2++;
	}	
	
	ip2=&b[0];
	while(ip2<&b[100])//printing out
	{
		printf("z%d\n",*ip2);
		ip2++;
	}
	
	return 0;
}

float randFloat(float c, float d){
	float r;
	r=rand()%(d-c+0.1)+c;//random number in a closed interval
	return r;
}
