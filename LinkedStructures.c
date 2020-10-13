#include <stdio.h>

struct point{
    int x;
    int y;
    struct point * next;
};

void printpoints(struct point *);

int main() {
    struct point pt1 = {1, 2, NULL};
    struct point pt2 = {-2, 3, NULL};
    struct point pt3 = {5, -4, NULL};
    struct point * start;
    
    start = &pt1;
    pt1.next = &pt2;
    pt2.next = &pt3;
    
    printpoints(start);
	return 0;
}

void printpoints(struct point *s) {
    struct point * ptr;
    ptr = s;
    while (ptr!=NULL) {
        printf("(%d, %d)\n", ptr->x, ptr->y);
        ptr = ptr->next;
    }
}
