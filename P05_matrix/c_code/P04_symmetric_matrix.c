#include <stdio.h>
#include <stdlib.h>

struct Matrix
{
    int *B;
    int n;
};

void setMatrix(struct Matrix *m, int i, int j, int y)
{
    if (i >= j)
        m->B[i * (i - 1) / 2 + j - 1] = y;
}

int Get(struct Matrix m, int i, int j)
{
    if (i >= j)
        return m.B[i * (i - 1) / 2 + j - 1];
    else
        return 0;
}

void Display(struct Matrix m)
{
    int i, j;
    for (i = 1; i <= m.n; i++)
    {
        for (j = 1; j <= m.n; j++)
        {
           if (i >= j)
             printf ("%d ", m.B[i * (i - 1) / 2 + j - 1]);
           else if (j > i)
             printf ("%d ", m.B[j * (j - 1) / 2 + i - 1]);
        }
        printf ("\n");
    }
}

int main()
{
    struct Matrix m;
    int i, j, y;
    m.n = 4;
    m.B = (int *) malloc (m.n * (m.n + 1) / 2 * sizeof (int));
    
    setMatrix(&m, 1, 1, 2);
    setMatrix(&m, 1, 2, 2);
    setMatrix(&m, 1, 3, 2);
    setMatrix(&m, 1, 4, 2);

    setMatrix(&m, 2, 1, 2);
    setMatrix(&m, 2, 2, 3);
    setMatrix(&m, 2, 3, 3);
    setMatrix(&m, 2, 4, 3);

    setMatrix(&m, 3, 1, 2);
    setMatrix(&m, 3, 2, 3);
    setMatrix(&m, 3, 3, 3);
    setMatrix(&m, 3, 4, 4);

    setMatrix(&m, 4, 1, 2);
    setMatrix(&m, 4, 2, 3);
    setMatrix(&m, 4, 3, 3);
    setMatrix(&m, 4, 4, 4);

    // printf ("Enter Dimension of Matrix: ");
    // scanf ("%d", &M.n);
    // M.B = (int *) malloc (M.n * (M.n + 1) / 2 * sizeof (int));

    // printf ("Enter all the elements of the matrix:\n");
    // for (i = 1; i <= M.n; i++)
    // {
    //     for (j = 1; j <= M.n; j++)
    //     { 
    //        scanf ("%d", &y);
    //        Set(&M, i, j, y);
    //     }
    // }
    Display (m);
}



 