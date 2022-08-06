#include <stdio.h>
#include <stdlib.h>

int string_length(char *a);
int count_char(char *b, char n);
int main() {
	char i;
	char c[200]="This is definitively a string";
	char c2[200]="This is definitively another string";
	printf("The number of characters of:\n'%s' is %d",c,string_length(c));
	printf("\n\nThe number of characters of:\n'%s' is %d",c2,string_length(c2));
	printf("\n\nThe number of a's in the first string is:%d",count_char(c,'a'));
	printf("\n\nThe number of i's in the second string is:%d\n",count_char(c2,'i'));
	
	for(i='a';i<='z';i++){
		//printf("%c\n",i);
		printf("The number of %c's in the first string is:%d\n",i,count_char(c,i));

	}
	
	return 0;
}

int string_length(char *a){
	int i;
	i=0;
	while(a[i]!='\0'){
	i++;
	}
	return i;
}

int count_char(char *b, char n){
	int i=0, count=0;
	while(b[i]!='\0'){
		if(b[i]==n){
			count++;
		}
		i++;
	}
	return count;
}	

