#include <stdio.h>

int main() {
	FILE *fedit;
	fedit=fopen("text.txt","r");
	if(fedit==NULL){
		printf("\nFile opening was not good\n");
		return 0;
	}
	return 0;
}
