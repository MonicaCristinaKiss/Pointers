#include <stdio.h>

void reset(int*,int);
void afiseaza(int*,int);

int main() {
	int vector[3]={18,19,20};
	afiseaza(vector,3);
	reset(vector,3);
	afiseaza(vector,3);
	return 0;
}

void afiseaza(int*pv,int nr) {
	int i;
	for(i=0;i<nr;i++) {
		printf("%d\t",pv[i]);
	}
	printf("\n");
}

void reset(int*pv,int nr) {
	int i;
	for(i=0;i<nr;i++) {
		*(pv+i)=0;
	}
}
