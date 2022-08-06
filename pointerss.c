#include <stdio.h>

int main() {
	int i=5, j=7;
	int *ip1, *ip2;
	ip1=&i;
	ip2=&j;
	
	printf("%p\n", ip1);
	printf("%d\n", *ip1);
	printf("%p\n", ip2);
	printf("%d\n", *ip2);
	
	*ip1=16;
	printf("%d\n",i);
	ip2=ip1;
	printf("%d %d\n",*ip2,j);

	float x=3.2, y=7.9, z;
	float *fp1=&x, *fp2=&y, *fp3=&z;
	
	printf("%p\n", fp1);
	printf("%.2f\n", *fp1);
	printf("%p\n", fp2);
	printf("%.2f\n", *fp2);
	
	*fp3=(*fp1) * (*fp2);
	printf("%.2f\n",z);
	
	return 0;
}
