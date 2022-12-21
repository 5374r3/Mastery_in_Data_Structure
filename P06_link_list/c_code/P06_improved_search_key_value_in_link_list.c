#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
} *first = NULL;
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
    if (p != NULL) {
        printf("%d ", p->data);
        Display(p->next);
    }
}
struct Node *search(struct Node *p, int key) {
    struct Node *q = NULL;
    while (p != NULL) {
        if (key == p->data) {
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q = p;
        p = p->next;
    }
    return 0;
}

int main() {
    struct Node *result;
    int A[] = {10, 11, 44, 22, 33};
    create(A, 5);
    Display(first);
    result = search(first, 22);
    if (result)
        printf("\n%d key found\n", result->data);
    else
        printf("\nkey Not found\n");
    Display(first);

    return 0;
}