#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

	char date[100],birth[100];
	int yy=2021, mm=4, dd=27;
	sprintf(date,"Today is: %d/%02d/%02d\n",yy,mm,dd);
	printf("\n%s\n",date);
	if(argc!=4){
		printf("We need 4 command lines");
		return 1;
	}
	sprintf(date,"My birth date is: %s/%s/%s",argv[3],argv[2],argv[1]);
	printf("%s",date);
	return 0;
}
