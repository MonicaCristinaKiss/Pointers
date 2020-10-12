#include <stdio.h>
#include <stdlib.h>

void afisare(int**,int,int);
void rotire(int**,int**,int,int);

int main() {
	int i,j,ran,col;
	printf("Introduceti numarul de randuri:\n");
	scanf(" %d",&ran);
	printf("Introduceti numarul de coloane:\n");
	scanf(" %d",&col);
	int **mat,**matrot;
	
	mat = malloc(ran * sizeof *mat);
  	for (i=0; i<ran; i++) {
    	mat[i] = malloc(col * sizeof *mat[i]);
  	}	
 	matrot = malloc(col * sizeof *matrot);
  	for (i=0; i<col; i++) {
    	matrot[i] = malloc(ran * sizeof *matrot[i]);
  	}
  	
	for(i=0;i<ran;i++) {
		for(j=0;j<col;j++) {
			printf("a[%d][%d]=",i,j);
			scanf(" %d",&mat[i][j]);
		}
	}
	afisare(mat,ran,col);
	rotire(mat,matrot,ran,col);
	printf("Matricea rotita:\n");
	afisare(matrot,col,ran);
	return 0;
}

void afisare(int**a,int r,int c) {
	int i,j;
	for(i=0;i<r;i++) {
		for(j=0;j<c;j++) {
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}

void rotire(int**a,int**b,int r, int c) {
	int i,j;
	for(i=0;i<c;i++) {
		for(j=0;j<r;j++) {
			b[i][j]=a[r-1-j][i];
		}
	}
}

