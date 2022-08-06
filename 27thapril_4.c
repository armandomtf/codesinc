#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	if(argc!=2){
		printf("2 command lines is needed");
		return 1;
	}
	char fname[100];
	int i=1;
	FILE *fp;

	sprintf(fname,"%s.%03d",argv[1],i);
	printf("%s\n",fname);
	fp=fopen(fname,"w");
	fclose(fp);
	return 0;
}
