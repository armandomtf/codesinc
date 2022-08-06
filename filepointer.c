#include <stdio.h>


int main() {
	int a,b,*ip1,*ip2;
	
	FILE *fin;
	fin=fopen("filepointer.txt","r");
	
	ip1=&a;
	ip2=&b;
	
	fscanf(fin,"%d",ip1);
	fscanf(fin,"%d",ip2);
	
	printf("%d\n%d\n",a,b);
	
	fclose(fin);
	return 0;
}
