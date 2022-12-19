#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n, ch, y, i, j;

    printf ("Enter Dimension of Matrix: ");
    scanf ("%d", &n);
    int *B = (int *) malloc (n * sizeof (int));

    do
    {
        printf ("\n1. Create Matrix\n");
        printf ("2. Get Matrix Element\n");
        printf ("3. Set Matrix Element\n");
        printf ("4. Display Matrix\n");
        printf ("0. Exit\n\n");

        printf ("Enter choice: ");
        scanf ("%d", &ch);

        switch (ch)
        {
          case 1:
             printf ("Enter non-zero elements of Diagonal Matrix:\n");
             for (int k = 0; k < n; k++)
             {
                 scanf ("%d", &B[k]);
             }
             break;

          case 2:
             printf ("Enter Indices: \n");
             scanf ("%d%d", &i, &j);
             if (i == j)
                 printf ("%d ", B[i - 1]);
             else
                 printf ("0 ");
             break;

          case 3:
             printf ("Enter row, column and element:\n");
             scanf ("%d%d%d", &i, &j, &y);
             if (i == j)
                 B[i - 1] = y;
             break;

          case 4:
             printf ("Matrix is: \n");
             for (int r = 0; r < n; r++)
             {
                 for (int c = 0; c < n; c++)
                 {
                   if (r == c)
                   {
                      printf ("%d ", B[r]);
                   }
                   else
                   {
                      printf ("0 ");
                   }
                 }
                 printf ("\n");
             }
             break;

             printf ("Enter choice: ");
             scanf ("%d", &ch);
       }
    }
    while (ch > 0);

    getchar ();
}

// 1. Create Matrix
// 2. Get Matrix Element
// 3. Set Matrix Element
// 4. Display Matrix
// 0. Exit

// Enter choice: 1
// Enter non-zero elements of Diagonal Matrix:
// 2 3 4 5

// 1. Create Matrix
// 2. Get Matrix Element
// 3. Set Matrix Element
// 4. Display Matrix
// 0. Exit

// Enter choice: 4
// Matrix is: 
// 2 0 0 0 
// 0 3 0 0 
// 0 0 4 0 
// 0 0 0 5 

// 1. Create Matrix
// 2. Get Matrix Element
// 3. Set Matrix Element
// 4. Display Matrix
// 0. Exit

// Enter choice: 0