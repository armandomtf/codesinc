#include<stdio.h>
#include<string.h>

int countUpperCase(char s[]);
void switchCase(char *s);

int main() {
	char a[200]="We are Learning Strings in PROG Class";
	printf("The number of upper case char in:\n'%s' is %d",a,countUpperCase(a));
	switchCase(a);
	printf("\n%s",a);
		
	return 0;
}

int countUpperCase(char s[]){
	int i,counter;
	i=0;
	while(s[i]!='\0'){
		if(s[i]>='A' && s[i]<='Z'){
			counter++;
		}
		i++;
	}		
	return counter;
}

void switchCase(char *s){
	int i,j;
	char temp;
	i=0;
	while(s[i]!='\0'){
		if(s[i]>='A' && s[i]<='Z'){
			s[i]=s[i]+32;
		}else if(s[i]>='a' && s[i]<='z'){
			s[i]=s[i]-32;
		}
		i++;
	}
	return;
}
