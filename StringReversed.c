#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isReversed(char*,char*,int);

int main() {
	char a[40];
	char b[40];
	bool c=false;
	int d;
	printf("string 1:\n");
	scanf(" %s",a);
	printf("string 2:\n");
	scanf(" %s",b);
	if(strlen(a)==strlen(b)) {
		d=strlen(a);
		if (isReversed(a,b,d)) {
			printf("reversed string");
		}else {
			printf("not-reversed string");
		}
	}else {
		printf("string doesn't have the same size");
	}
	return 0;
}

bool isReversed(char*pa,char*pb,int nr) {
	int i;
	bool rev=false;
	for(i=0;i<nr;i++) {
		if(pa[i]!=pb[nr-1-i]) {
			break;
		}else {
			if(i==nr-1) {
				rev=true;
			}
		}
	}
	return rev;
}
