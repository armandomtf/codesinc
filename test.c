#include<stdio.h>

struct complex{
	float real;
	float imag;
};

void print_complex(struct complex *cp);

int main(){
	struct complex a[100], *cpxp;

	
	for(cpxp=&a[0];cpxp<=&a[99];cpxp++){
		a[cpxp]=randInt(100,10000);
		print_complex(cpxp);
	}

return 0;

}
void print_complex(struct complex *cp){
	printf("\n%.2f + i%.2f\n",cp->real,cp->imag);	
return;
}


