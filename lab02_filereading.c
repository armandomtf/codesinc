#include <stdio.h>

int main() {
	int a[10];
	int i;
	FILE *fin;
	fin=fopen("C:\\Users\\Armando\\Documents\\c++\\Textfile.txt","r");
	
	for(i=0;i<10;i++){
		fscanf(fin,"%d\n",&a[i]);
	}
	
	fclose(fin);
	
	i=0;
	while(i<10){
		printf("%d\n",a[i]);
		i++;
	}
	return 0;
}
