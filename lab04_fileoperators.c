#include <stdio.h>

int main() {
	FILE *fin;
	fin=fopen("particle.dat.txt","r");
	
	/*
	if(fin==NULL){
		printf("\nFile opening was not good\n");
		return 0;
	}
	*/
	
	if(!fin){
		printf("\nFile opening was not good\n");
		return 0;
	}
	
	int i,j;
	float a[10][7];
	
	for(i=0;i<10;i++){
		for(j=0;j<7;j++){
			fscanf(fin,"%f",&a[i][j]);
		}
		fscanf(fin,"\n");
	}
	
	for(i=0;i<10;i++){
		for(j=0;j<7;j++){
			printf("%.2f  ",a[i][j]);
		}
		printf("\n");
	}
		
	fclose(fin);
	return 0;
}
