#include <stdio.h>
#include <stdlib.h>

int greater(int a, int b);1
int main() {
	int x,y,g,i;
	i=0;
	for(i=0;i<10;i++){
		printf("\nPls, type two integers:\n");
		scanf("%d %d",&x,&y);
		g=greater(x,y);
		printf("\nThe greater integer is: %d\n",g);
	}
	return 0;
}

int greater(int a, int b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}
