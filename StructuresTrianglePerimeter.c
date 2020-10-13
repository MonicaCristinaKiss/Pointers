#include <stdio.h>
#include <math.h>

struct point {
	int x,y;
};

void read(struct point*);
void print(struct point*);

int main() {
	float a,b,c,P;
	struct point triunghi[3];
	int i;
	for(i=0;i<3;i++) {
		read(&triunghi[i]);
	}
	print(triunghi);
	a=sqrt(pow((triunghi[0].x-triunghi[1].x),2)+pow((triunghi[0].y-triunghi[1].y),2));
	b=sqrt(pow((triunghi[1].x-triunghi[2].x),2)+pow((triunghi[1].y-triunghi[2].y),2));
	c=sqrt(pow((triunghi[2].x-triunghi[0].x),2)+pow((triunghi[2].y-triunghi[0].y),2));
	printf("Triunghiul are dimensiunile laturilor: %.3f, %.3f si %.3f.\n",a,b,c);
	P=a+b+c;
	printf("Perimetrul triughilui este %.3f.\n",P);
	return 0;
}

void read(struct point * ppunct) {
	printf("Introduceti coordonatele unui punct\n");
	printf("x: ");
	scanf(" %d",&ppunct->x);
	printf("y: ");
	scanf(" %d",&ppunct->y);
}

void print(struct point * ptr) {
	int i;
	for(i=0;i<3;i++) {
	printf("Coordonatele punctului %d sunt (%d, %d)\n",i+1,ptr[i].x,ptr[i].y);
	}
}
