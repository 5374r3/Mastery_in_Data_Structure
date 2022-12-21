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
struct Node *search(struct Node *p, int key) {
    while (p != NULL) {
        if (key == p->data)
            return p;
        p = p->next;
    }
    return 0;
}
struct Node *search_recursive(struct Node *p, int key) {
    if (p == 0)
        return 0;
    if (key == p->data)
        return p;
    return search_recursive(p->next, key);
}

int main() {
    struct Node *result, *result1;
    int A[] = {10, 11, 44, 22, 33};
    create(A, 5);
    result = search(first, 25);
    if (result)
        printf("key found\n");
    else
        printf("key Not found\n");

    result1 = search_recursive(first, 10);
    if (result1)
        printf("key found\n");
    else
        printf("key Not found\n");

    return 0;
}