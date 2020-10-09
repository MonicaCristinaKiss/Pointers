#include <stdio.h>

void swap(int,int);
void swapbyaddress(int*,int*);

int main() {
	int a = 18;
	int b = 25;
	swap(a,b);
	printf("%d and %d\n",a,b);
	swapbyaddress(&a,&b);
	printf("%d and %d\n",a,b);
	return 0;
}

void swap(int nr1,int nr2) {
	int t = nr1;
	nr1 = nr2;
	nr2 = t;
}

void swapbyaddress(int*pnr1,int*pnr2) {
	int t = *pnr1;
	*pnr1 = *pnr2;
	*pnr2 = t;
}
