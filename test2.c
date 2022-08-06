#include<stdio.h>
#include<string.h>


void del(char str[], char ch);
int main(int argc, char *argv[]) {
char str[100];
char ch;
sscanf(argv[1],"%s",&str);

printf("\nEnter character which you want to delete : ");
scanf("%c", &ch);
printf("The string you wrote is: %s\n",str);
del(str, ch);

return 0; 
}

void del(char str[], char ch){
	int i=0,j=0;
	int size;
	char ch1;
	char str1[100];
	
	size=strlen(str);
	
	for (i=0;i<size;i++) {
		if(str[i]!=ch){
			ch1=str[i];
			str1[j]=ch1;
			j++;
		}
	}
	str1[j]='\0';
	
	printf("The new string is: %s",str1);
}
