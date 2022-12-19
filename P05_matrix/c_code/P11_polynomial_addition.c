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

    printf("Enter Number of terms: ");
    scanf("%d", &p->n);

    p->terms = (struct Term *)malloc(p->n * sizeof(struct Term));

    printf("Enter terms:\n");
    for (i = 0; i < p->n; i++)
        scanf("%d%d", &p->terms[i].coeff, &p->terms[i].exp);
    printf("\n");
}

void display(struct Poly p) {
    int i;
    for (i = 0; i < p.n; i++) {
        printf("%dx%d", p.terms[i].coeff, p.terms[i].exp);
        if (i + 1 < p.n)
            printf(" + ");
    }
    printf("\n");
}

struct Poly *add(struct Poly *p1, struct Poly *p2) {
    int i, j, k;
    struct Poly *sum;

    sum = (struct Poly *)malloc(sizeof(struct Poly));
    sum->terms = (struct Term *)malloc((p1->n + p2->n) * sizeof(struct Term));

    i = j = k = 0;

    while (i < p1->n && j < p2->n) {
        if (p1->terms[i].exp > p2->terms[j].exp)
            sum->terms[k++] = p1->terms[i++];
        else if (p1->terms[i].exp < p2->terms[j].exp)
            sum->terms[k++] = p2->terms[j++];
        else {
            sum->terms[k].exp = p1->terms[i].exp;
            sum->terms[k++].coeff = p1->terms[i++].coeff + p2->terms[j++].coeff;
        }
    }

    for (; i < p1->n; i++)
        sum->terms[k++] = p1->terms[i];
    for (; j < p2->n; j++)
        sum->terms[k++] = p2->terms[j];

    sum->n = k;
    return sum;
}

int main() {
    struct Poly p1, p2, *p3;

    printf("Enter Polynomial 1:\n");
    create(&p1);
    printf("Enter Polynomial 2:\n");
    create(&p2);

    p3 = add(&p1, &p2);
    printf("\n");

    printf("Polynomial 1 is: ");
    display(p1);
    printf("\n");

    printf("Polynomial 2 is: ");
    display(p2);
    printf("\n");

    printf("Polynomial 3 is: ");
    display(*p3);

    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// struct Term {
//     int coeff;
//     int exp;
// };
// struct Poly {
//     int n;
//     struct Term *terms;
// };

// void create(struct Poly *p) {
//     int i;
//     printf("number of terms? ");
//     scanf("%d", &p->n);
//     p->terms = (struct Term *)malloc(p->n * sizeof(struct Term));
//     printf("enter terms\n");
//     for (i = 0; i < p->n; i++)
//         scanf("%d %d", &p->terms[i].coeff, &p->terms[i].exp);
// }
// void dispaly(struct Poly p) {
//     int i;
//     for (i = 0; i < p.n; i++)
//         printf("%dx^%d+", p.terms[i].coeff, p.terms[i].exp);
// }

// struct Poly *add(struct Poly *p1, struct Poly *p2) {
//     int i, j, k;
//     struct Poly *sum;
//     // total size of polynomial depenends on both size of polynomial length sum
//     sum = (struct poly *)malloc(sizeof(struct Poly));
//     sum->terms = (struct Term *)malloc((p1->n + p2->n) * sizeof(struct Term));
//     i = j = k = 0;
//     while (i < p1->n && j < p2->n) {
//         if (p1->terms[i].exp > p2->terms[j].exp)
//             sum->terms[k++] = p1->terms[i++];
//         else if (p2->terms[j].exp > p1->terms[i].exp)
//             sum->terms[k++] = p2->terms[j++];
//         else {
//             sum->terms[k].exp = p1->terms[i].exp;
//             sum->terms[k++].coeff = p1->terms[i++].coeff + p2->terms[j++].coeff;
//         }
//     }
//     for (; i < p1->n; i++)
//         sum->terms[k++] = p1->terms[i];
//     for (; i < p2->n; i++)
//         sum->terms[k++] = p2->terms[i];
//     sum->n = k;
//     return sum;
// }

// int main() {
//     /*
//     struct Poly p1;
//     create(&p1);
//     dispaly(p1);
//     return 0; */

//     struct Poly p1, p2, *p3;
//     create(&p1);
//     create(&p2);
//     p3 = add(&p1, &p2);
//     dispaly(p1);
//     printf("\n");
//     dispaly(p2);
//     printf("\n");
//     dispaly(*p3);
//     return 0;
// }

// /*
// number of terms? 3
// enter terms
// 1 5
// 1 3
// 1 1
// number of terms? 4
// enter terms
// 1 4
// 1 2
// 1 0
// 2 1
// 1x^5+1x^3+1x^1+
// 1x^4+1x^2+1x^0+2x^1+
// 1x^5+1x^4+1x^3+1x^2+1x^1+2x^1+ */

// /*
// number of terms? 4
// enter terms
// 2 3
// 5 2
// 3 1
// 4 0
// 2x^3+5x^2+3x^1+4x^0+
// */

// /*
// 4
// 2 3
// 5 2
// 3 1
// 4 0
// */