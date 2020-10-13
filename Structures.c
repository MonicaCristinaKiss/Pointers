#include <stdio.h>

struct elev {
	char firstName[30];
	char lastName[30];
	float nota1,nota2,medie;
	};

void readelev(struct elev*);
void printelev(struct elev);

int main() {
	struct elev M;
	readelev(&M);
	printelev(M);
	return 0;
}

void readelev(struct elev *elevptr) {
	printf("Prenume:\n");
	scanf(" %s",(*elevptr).firstName);
	printf("Numele:\n");
	scanf(" %s",(*elevptr).lastName);
	printf("Prima nota:\n");
	scanf(" %f",&elevptr->nota1);
	printf("A doua nota:\n");
	scanf(" %f",&elevptr->nota2);
	(*elevptr).medie=((*elevptr).nota1+(*elevptr).nota2)/2;
}

void printelev(struct elev stud) {
	printf("%s %s are media %.2f",stud.lastName,stud.firstName,stud.medie);
}
