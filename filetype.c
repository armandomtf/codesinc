#include<stdio.h>

int main(){
	int a[10]={1,3,5,23,7,2,3,56,2,0};
	int i;
	
	FILE *fout;
	fout=fopen("Textfile.txt","w");
	
	for(i=0;i<10;i++){
		fprintf(fout,"%d\n",a[i]);
	} 
	
	fclose(fout);
	
	return 0;
}
