#include <stdio.h>

int main() {
	int a[100],i,j;
	FILE *fedit;
	fedit=fopen("text.txt","r");
	
	if(fedit==NULL){
		printf("\nFile opening was not good\n");
		return 0;
	}
	
	i=0;
	while (!feof(fedit)){
		fscanf(fedit,"%d\n",&a[i]);
		i++;
	}
	
	j=0;
	while (j<i){
		printf("%d\n",a[j]);
		j++;
	}

	fclose(fedit);
	return 0;
}
