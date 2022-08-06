#include <stdio.h>
#include <string.h>
#define N 17

typedef struct{
	int day;
	int month;
	int year;
}DATE;

typedef struct{
	char firstName[100];
	char familyName[100];
	int semester;
	float avgGrade;
	DATE birthDate;
}STUDENT;

void printStudent(STUDENT s);
int familyLength(STUDENT s);
void alphabetic(STUDENT s);

int main(int argc, char *argv[]) {
	int i;
	STUDENT eng[N];
	FILE *fEng;
	fEng=fopen("engineering_students.dat.txt","r");
	if(!fEng){
		printf("The file opening was not successful");
		return 1;
	}
	
	for(i=0;i<N;i++){
		fscanf(fEng,"%s %s %d %f %d %d %d", &eng[i].firstName,\
		&eng[i].familyName,&eng[i].semester,&eng[i].avgGrade,&eng[i].birthDate.year,\
		&eng[i].birthDate.month,&eng[i].birthDate.day);
		printStudent(eng[i]);
	}
	for(i=0;i<N;i++){
		printf("The number of char of %s is %d\n",eng[i].familyName,familyLength(eng[i]));
	}
	
	printf("\nSorting in alphabetic order...");
	i=0;
	while(i<N){
		alphabetic(eng[i]);
		i++;
	}
	
	
	fclose(fEng);
	return 0;
}

void printStudent(STUDENT s){
	printf("First name:%s\n",s.firstName);
	printf("Family name:%s\n",s.familyName);
	printf("Current semester:%d\n",s.semester);
	printf("Average grade:%f\n",s.avgGrade);
	printf("Birth date:%d/%d/%d\n\n",s.birthDate.year,s.birthDate.month,s.birthDate.day);
	return;
}

int familyLength(STUDENT s){
	int count;
	count=0;
	while(s.familyName[count]!='\0'){
		count++;
	}
	return count;
}

void alphabetic(STUDENT s){
	int i,j;
	STUDENT temp;
   for(i=0;i<N;i++)
     {
    for(j=i+1;j<N;j++){
    	if(strcmp(s[i].familyName,s[j].familyName)>0){
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
         printf("%s\n",s.familyName[i]);
     }
    return;
}
