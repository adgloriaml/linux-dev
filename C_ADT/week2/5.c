#include <stdio.h>

struct point{
    int x;
    int y;
    struct point * next;
};

int main(void) {
    //! showMemory(start=65520)
    struct point pt1 = {1, 2, NULL};
    struct point pt2 = {-2, 3, NULL};
    struct point pt3 = {5, -4, NULL};
    struct point * start, * ptr;
    
    start = &pt1;
    pt1.next = &pt2;
    pt2.next = &pt3;
    
    ptr = start;
    while (ptr!=NULL) {
        printf("(%d, %d)\n", ptr->x, ptr->y);
        ptr = ptr->next;
    }
    return 0;
}

