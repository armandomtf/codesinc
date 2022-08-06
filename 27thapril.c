#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	if(argc!=3){
		printf("Please provide 3 command line arg");
		return 1;
	}

	printf("My program is: %s\n",argv[0]);
	printf("The 2nd command line arg is: %s\n",argv[1]);
	printf("The 3rd command line arg is: %s\n",argv[2]);
	
	int a;
	float x;
	sscanf(argv[1],"%d",&a);
	sscanf(argv[2],"%f",&x);
	printf("The converted values are: %d and %f\n",a,x);
	
	
	return 0;
}
