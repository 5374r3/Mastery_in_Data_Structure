#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
} *first;
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
void Insert(int pos, int value) {
    struct Node *t, *p;
    if (pos == 0) {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = value;
        t->next = first;
        first = t;
    } else if (pos > 0) {
        p = first;
        for (int i = 0; i < pos - 1 && p; i++) {
            p = p->next;
        }
        if (p) {
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = value;
            t->next = p->next;
            p->next = t;
        }
    }
}
int main() {
    // int A[] = {10, 44, 11, 33, 50};
    // create(A, 5);
    // Display(first);

    Insert(0, 51);
    Display(first);

    Insert(1, 70);
    Display(first);

    Insert(2, 88);
    Display(first);

    Insert(3, 18);
    Display(first);

    Insert(2, 33);
    Display(first);

    Insert(0, 3);
    Display(first);

    Insert(6, 23);
    Display(first);
    return 0;
}