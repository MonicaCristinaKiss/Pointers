#include <stdio.h>

void sortare(int*,int);
void afisare(int*,int);

int main() {
	int i,N;
	printf("Introduceti numarul de elemente:\n");
	scanf(" %d",&N);
	int a[N];
	for(i=0;i<N;i++) {
		printf("a[%d]=",i);
		scanf(" %d",&a[i]);
	}
	sortare(a,N);
	afisare(a,N);
	return 0;
}

void sortare(int*pa,int n) {
	int i,temp, sortat;
	while(1) {
		sortat=0;
		for(i=0;i<n-1;i++) {
			if(pa[i]>pa[i+1]){
				temp=pa[i];
				pa[i]=pa[i+1];
				pa[i+1]=temp;
				sortat=1;
			}
		}
		if(sortat==0) {
			break;
		}
	}
}

void afisare(int*pa,int n) {
	int i;
	for(i=0;i<n;i++) {
		printf("%d ",pa[i]);
	}
	printf("\n");
}
