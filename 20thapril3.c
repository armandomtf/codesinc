#include <stdio.h>
#include <string.h>

int compareString(char *a,char *b);

int main() {
	char a[100]="New project",b[200]="I like programming",c[200]="I like programming";
	if(compareString(a,b)==1){
		printf("The two strings are equal\n");
	}else{
		printf("The two strings are not equal\n");
	}
	return 0;
}

int compareString(char *a,char *b){
	int i=0;
	while(a[i]!='\0' && b[i]!='\0' && a[i]==b[i]){
		i++;
	}
	
	if(a[i]=='\0'&&b[i]=='\0'){
		return 1;
	}else{
		return 0;
	}
}
