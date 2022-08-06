#include <stdio.h>

void intDivision(int x, int y, int *res, int *rem);
int main() {
	int a=3, b=7,result,remainder;
	FILE *fout;
	
	intDivision(a,b,&result,&remainder);
	printf("Result=%d and Remainder=%d",result,remainder);
	
	fout=fopen("resultFile.txt","w");
	if(!fout){
		printf("\nFile opening was not sucessful");
		return 1;
	}
	fprintf(fout,"%d",result);
	fclose(fout);
	return 0;
}

void intDivision(int x, int y, int *res, int *rem){
	*res=y/x;
	*rem=y%x;
return;
}
