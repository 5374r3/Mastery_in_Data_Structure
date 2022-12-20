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
int count(struct Node *p) {
    int ct = 0;
    while (p != NULL) {
        ct++;
        p = p->next;
    }
    return ct;
}
int count_recursive_method(struct Node *p) {
    if (p == 0)
        return 0;
    return count_recursive_method(p->next) + 1;
}
int count_rec(struct Node *p) {
    int x = 0;
    if (p) {
        x = count_rec(p->next);
        return x + 1;
    }
    else{
        return x;
    }
}
int main() {
    int A[] = {10, 11, 44, 22, 33};
    create(A, 5);
    printf("%d\n", count(first));
    printf("%d\n", count_recursive_method(first));
    printf("%d\n", count_rec(first));

    return 0;
}