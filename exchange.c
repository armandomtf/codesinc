#include <stdio.h>

void exchange(int *ip1, int *ip2);
int main() {
	int a=3,b=7,c,pa=3,pb=7;
	int *ip1=&pa, *ip2=&pa;
	printf("Before: a=%d and b=%d",a,b);
	c=a;
	a=b;
	b=c;			
	printf("\nAfter: a=%d and b=%d",a,b);
	
	exchange(&pa,&pb);
	printf("\nAfter: pa=%d and pb=%d",pa,pb);
	
	exchange(ip1,ip2);
	printf("\nAfter: pa=%d and pb=%d",*ip1,*ip2);
	return 0;
}

void exchange(int *ip1, int *ip2){
	int c;
	c=*ip1;
	*ip1=*ip2;
	*ip2=c;
	return;
}
