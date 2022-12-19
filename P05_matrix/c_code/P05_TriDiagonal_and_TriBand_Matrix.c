#include <stdio.h>
#include <stdlib.h>

struct Matrix
{
    int *B;
    int n;
};

void Set (struct Matrix *m, int i, int j, int y)
{
    if (i - j == 1)
    {
        m->B[i - 1] = y;
    }
    if (i - j == 0)
    {
        m->B[m->n - 1 + i - 1] = y;
    }
    if (i - j == -1)
    {
        m->B[(2 * m->n) - 1 + i - 1] = y;
    }
}

int Get (struct Matrix m, int i, int j)
{
    if (i - j == 1)
    {
      return m.B[i - 1];
    }
    if (i - j == 0)
    {
      return m.B[m.n - 1 + i - 1];
    }
    if (i - j == -1)
    {
      return m.B[(2 * m.n) - 1 + i - 1];
    }

    return 0;
}

void Display (struct Matrix m)
{
    int i, j;

    printf ("\nMatrix is: \n");

    for (i = 1; i <= m.n; i++)
    {
        for (j = 1; j <= m.n; j++)
        {
           if (i - j == 1)
           {
               printf ("%d ", m.B[i - 1]);
           }
           else if (i - j == 0)
           {
               printf ("%d ", m.B[m.n - 1 + i - 1]);
           }
           else if (i - j == -1)
           {
               printf ("%d ", m.B[(2 * m.n) - 1 + i - 1]);
           }
           else
           {
               printf ("0 ");
           }
        }
        printf ("\n");
    }
}

int main ()
{
    struct Matrix M;
    int i, j, y;

    printf ("Enter Dimension of Matrix: ");
    scanf ("%d", &M.n);
    M.B = (int *) malloc ((3 * M.n - 2) * sizeof (int));

    printf ("Enter all the elements of the matrix:\n");
    for (i = 1; i <= M.n; i++)
    {
        for (j = 1; j <= M.n; j++)
        {
           scanf ("%d", &y);
           Set (&M, i, j, y);
        }
    }

    Display (M);
    printf("%d\n",Get(M,1,1));
    printf("%d\n",Get(M,3,4));
}


// 5
// 1 2 0 0 0
// 1 2 3 0 0
// 0 1 2 3 0
// 0 0 1 2 3
// 0 0 0 1 2
