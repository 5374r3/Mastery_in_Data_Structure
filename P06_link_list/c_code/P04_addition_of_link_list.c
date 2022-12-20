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
int Addition(struct Node *p) {
    int sum = 0;
    while (p != NULL) {
        sum = sum + p->data;
        p = p->next;
    }
    return sum;
}
int Recursion_Addition(struct Node *p) {
    int count = 0, sum = 0;
    if (p == 0)
        return 0;
    else
        return (Recursion_Addition(p->next)) + p->data;
}
int main() {
    int A[] = {10, 30, 40, 50, 22};
    create(A, 5);
    printf("%d\n", Addition(first));
    printf("%d\n", Recursion_Addition(first));
}