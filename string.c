#include <stdio.h>
#include <string.h>

int main(){
	char s[]="Text string for class of 6th april";
	char a[5]="Four";
	char b[10]={'A','p','p','l','e','t','r','e','e','\0'};
	char str[100];
	char str1[100]="Student of Physics, Armando is programming";
	int n;
	FILE *fout,*fin;
	fout=fopen("string.txt","w");
	
	printf("%s",s);
	n=sizeof(s);
	printf("\n%d",n);
	printf("\n%c",s[34]);
	printf("\n%s",a);
	printf("\n%s",b);
	/*printf("\nEnter a text:\n");
	scanf("%s",s);
	printf("\n%s",s);
	*/
	printf("\nEnter some text again:\n");
	fgets(s,sizeof(s),stdin);
	printf("\n%s",s);
	puts(s);
	fputs(s,fout);
	fclose(fout);
	
	fin=fopen("string.txt","r");
	fgets(str,sizeof(str),fin);
	printf("\nPrinting the document:\n");
	puts(str);
	fclose(fin);
	
	str1[15]='\0';
	printf("Showing the string1 char:\n");
	puts(str1);
	
	return 0;
}
