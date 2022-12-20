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
    int count = 0;
    while (p != NULL) {
        printf("%d ", p->data);
        count +=1;
        p = p->next;
    }
    printf("\n%d\n",count);
}
int main() {
    int A[] = {10, 30, 40, 50, 22};
    create(A, 5);
    Display(first);
}