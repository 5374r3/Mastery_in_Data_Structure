#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
} *first = NULL;
void create(int A[], int n) {
    int i;
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
    if (p != NULL) {
        printf("%d ", p->data);
        Display(p->next);
    }
}
void ReverseDisplay(struct Node *p) {
    if (p != NULL) {
        ReverseDisplay(p->next);
        printf("%d ", p->data);
    }
}
int main() {
    int A[] = {10, 30, 40, 50, 2};
    create(A, 5);
    Display(first);
    printf("\n");
    ReverseDisplay(first);
}