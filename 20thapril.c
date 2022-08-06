#include <stdio.h>
#include <string.h>

struct student{
	char firstName[100];
	char lastName[100];
	int age;
	float avGrade;
};

void printStudent(struct student s);
struct student readStudent();

int main() {
	struct student myself,myfriend;
	myself.age=19;
	myself.avGrade=5.0;
	strcpy(myself.firstName,"Armando");
	strcpy(myself.lastName,"Tavares");
	printStudent(myself);
	myfriend=readStudent();
	printStudent(myfriend);
	
	return 0;
}

void printStudent(struct student s){
	printf("\nFirst Name: %s\n",s.firstName);
	printf("Last Name: %s\n",s.lastName);
	printf("Age: %d\n",s.age);
	printf("Average grade: %.2f\n",s.avGrade);
	return;
}

struct student readStudent(){	
	struct student s;
	printf("\nPls enter the first name of the student:\n");
	scanf("%s",s.firstName);
	printf("Pls enter the last name of the student:\n");
	scanf("%s",s.lastName);
	printf("Pls enter the age of the student:\n");
	scanf("%d",&s.age);
	printf("Pls enter the average grade of the student:\n");
	scanf("%f",&s.avGrade);
	return s;
}
