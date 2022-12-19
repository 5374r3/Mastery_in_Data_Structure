#include <stdio.h>
#include <stdlib.h>
struct Term {
    int coeff;
    int exp;
};
struct Poly {
    int n;
    struct Term *terms;
};

void create(struct Poly *p) {
    int i;
    printf("number of terms? ");
    scanf("%d", &p->n);
    p->terms = (struct Term *)malloc(p->n * sizeof(struct Term));
    printf("enter terms\n");
    for (i = 0; i < p->n; i++)
        scanf("%d %d", &p->terms[i].coeff, &p->terms[i].exp);
}
void dispaly(struct Poly p) {
    int i;
    for (i = 0; i < p.n; i++)
        printf("%dx^%d+", p.terms[i].coeff, p.terms[i].exp);
}

int main() {
    struct Poly p1;
    create(&p1);
    dispaly(p1);
    return 0;
}

/*
number of terms? 4
enter terms
2 3
5 2
3 1
4 0
2x^3+5x^2+3x^1+4x^0+
*/

/* 
4
2 3
5 2
3 1
4 0 
*/