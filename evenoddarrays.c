#include <stdio.h>
#include <stdlib.h>

int randInt(int a, int b);
int evenCounter(int c[]);
int oddCounter(int d[]);
int main() {
	int a[100],i,j,even,odd,greater;
	for(i=0;i<100;i++){
		a[i]=randInt(100,10000);
	}
	
	even=evenCounter(a);	
	odd=oddCounter(a);
	
	printf("This array has %d even numbers and %d odd numbers.\n",even,odd);
	
	if(even>odd){
		printf("In this case, this array contains more even than odd numbers.");
	}else{
		printf("In this case, this array contains more odd than even numbers.");
	}
	return 0;
}
int randInt(int a, int b){
	int r;
	r=rand()%(b-a+1)+a;//random number in a closed interval
	return r;
}

int evenCounter(int c[]){
	int even_count=0,i;
	for(i=0;i<100;i++){
		if(c[i]%2==0){
			even_count++;
		}
	}
	return even_count;
}

int oddCounter(int d[]){
	int odd_count=0,i;
	for(i=0;i<100;i++){
		if(d[i]%2!=0){
			odd_count++;
		}
	}
	return odd_count;
}

