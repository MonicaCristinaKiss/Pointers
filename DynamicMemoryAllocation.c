#include <stdio.h>
#include <stdlib.h>

int main() {
	int * intptr;
	double * doubleptr;
	intptr=(int*)malloc(sizeof(int));
	*intptr=5;
	doubleptr=(double*)malloc(sizeof(double));
	*doubleptr=31.6;
	printf("int %p\ndouble %p\n",intptr,doubleptr);
	printf("int %d\ndouble %lf\n",*intptr,*doubleptr);
	free(intptr);
	free(doubleptr);
	printf("int %p\ndouble %p\n",intptr,doubleptr);
	printf("int %d\ndouble %lf\n",*intptr,*doubleptr);
	return 0;
}
