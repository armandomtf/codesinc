#include <stdio.h>

struct COMPLEX{
	float img;
	float real;
};

struct COMPLEX add_complex(struct COMPLEX c1, struct COMPLEX c2);

int main() {
	struct COMPLEX c1, c2,c3;
	c1.real=0.5;
	c1.img=1.7;	
	c2=c1;
	c3=add_complex(c1,c2);
	printf("\n%.2f + i%.2f",c3.real,c3.img);
	
	return 0;
}

struct COMPLEX add_complex(struct COMPLEX c1, struct COMPLEX c2){
	struct COMPLEX sum;
	sum.img=c1.img+c2.img;
	sum.real=c1.real+c2.real;
	return sum;
}
