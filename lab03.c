#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct{
	 float x;
	 float y;
}VECTOR2D;
     
typedef struct{
	float m;
	VECTOR2D pos;
	VECTOR2D vel;
}PARTICLE;

float rand01();
void print_vector(VECTOR2D v);
void print_particle(PARTICLE p);
float distance(PARTICLE p1, PARTICLE p2);
VECTOR2D center_of_mass(PARTICLE p1, PARTICLE p2);

int main()
{
	VECTOR2D v[10], rc;
	PARTICLE p1,p2,p3;
	p1.m=1;
	p1.pos.x=1.7;
	p1.pos.y=3.9;
	p2.m=5.1;
	p2.pos.x=34.6;
	p2.pos.y=8.3;
	float dist;
	int i;
	
	for(i=0;i<10;i++)
	{
		v[i].x= rand01();
		v[i].y= rand01();
		print_vector(v[i]);
	}
	
	print_particle(p1);
	print_particle(p2);
	
	dist=distance(p1,p2);
	printf("\nThe distance between p1 and p2 is: %.2f",dist);
	
	rc=center_of_mass(p1,p2);
	printf("\nThe center of mass is:");
	print_vector(rc);
return 0;
}

float rand01()
{
	float r;
	r=(float)rand()/(float)RAND_MAX;
	return r;
}

void print_vector(VECTOR2D v){
	printf("\n(%.2f,%.2f)",v.x,v.y);	
	return;
}

void print_particle(PARTICLE p){
	printf("\nMass=%f",p.m);
	printf("\nPosition=(%.2f,%.2f)",p.pos.x,p.pos.y);
	return;
}

float distance(PARTICLE p1, PARTICLE p2){
	float d;
	d=sqrt((p2.pos.x-p1.pos.x)*(p2.pos.x-p1.pos.x)+\
	(p2.pos.y-p1.pos.y)*(p2.pos.y-p1.pos.y));
	return d;
}

VECTOR2D center_of_mass(PARTICLE p1, PARTICLE p2){
	VECTOR2D rc;
	rc.x=(p1.m*p1.pos.x+p2.m*p2.pos.x)/(p1.m+p2.m);
	rc.y=(p1.m*p1.pos.y+p2.m*p2.pos.y)/(p1.m+p2.m);
	return rc;
}
