#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char c[20],d[20];
	int x;
	if(argc!=2){
		printf("You should enter 2 command line arg");
		return 1;
	}
	float r,a,y;
	sscanf(argv[1],"%f",&r);
	
	strcpy(c,"192");
	strcpy(d,"93.61");
	x=atoi(c);
	y=atof(d);
	printf("\nThe string is: %s \t The converted string is: %d\n",c,x);
	printf("\nThe string is: %s \t The converted string is: %f\n",d,y);
		
	a=3.141592*r*r;
	printf("The area of this circle is: %.3f",a);
	return 0;
}
