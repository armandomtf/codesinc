#include <stdio.h>

int main(int argc, char *argv[]) {
	int x,y,z;
	if(argc!=3){
		printf("Pls enter two integers");
		return 1;
	}
	sscanf(argv[1],"%d",&x);
	sscanf(argv[2],"%d",&y);
	z=x+y;
	printf("\n%d + %d = %d",x,y,z);
	return 0;
}
