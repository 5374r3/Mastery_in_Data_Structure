#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
} *first = NULL, *last = NULL;

void create(int A[], int n) {
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++) {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void Display(struct Node *p) {
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}
void LastInsert(int value) {
    struct Node *t, *p;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = value;
    t->next = NULL;
    if (first == NULL) {
        first = last = t;
    } else {
        last->next = t;
        last = t;
    }
}
int main() {
    LastInsert(51);
    Display(first);

    LastInsert(70);
    Display(first);

    LastInsert(88);
    Display(first);

    LastInsert(18);
    Display(first);

    LastInsert(33);
    Display(first);

    LastInsert(3);
    Display(first);

    LastInsert(23);
    Display(first);
    return 0;
}