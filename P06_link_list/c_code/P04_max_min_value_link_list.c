#include <limits.h>
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
int Maximum(struct Node *p) {
    int Max = INT_MIN;
    while (p != NULL) {
        if (p->data > Max) {
            Max = p->data;
        }
        p = p->next;
    }
    return Max;
}
int Minimum(struct Node *p) {
    int Min = INT_MAX;
    while (p != NULL) {
        if (p->data < Min) {
            Min = p->data;
        }
        p = p->next;
    }
    return Min;
}

// recursion method
int maxRec(struct Node *p) {
    int x = 0;
    if (p == 0)
        return INT_MIN;
    else {
        x = maxRec(p->next);
        if (x > p->data)
            return x;
        else
            return p->data;
    }
}
int minRec(struct Node *p) {
    int x = 0;
    if (p == 0)
        return INT_MAX;
    else {
        x = minRec(p->next);
        if (x < p->data)
            return x;
        else
            return p->data;
    }
}
int minRecRewrite(struct Node *p) {
    int x = 0;
    if (p == 0)
        return INT_MAX;
        x = minRec(p->next);
    return x<p->data?x:p->data;
}
int main() {
    int A[] = {10, 30, 40, 50, 22};
    create(A, 5);
    printf("%d\n", Maximum(first));
    printf("%d\n", Minimum(first));
    printf("%d\n", maxRec(first));
    printf("%d\n", minRec(first));
    printf("%d\n", minRecRewrite(first));
}