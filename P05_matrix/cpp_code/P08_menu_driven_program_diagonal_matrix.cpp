#include <iostream>
using namespace std;

class Diagonal
{
    private:
        int *B, n;
    public:
        Diagonal (int n);
        void Create ();
        void Get (int i, int j);
        void Set (int i, int j, int y);
        void Display ();
        ~Diagonal ();
};

Diagonal::Diagonal (int n)
{
    this->n = n;
    B = new int[this->n];
}

void Diagonal::Create ()
{
    cout << "Enter non-zero elements of Diagonal Matrix:\n";
    for (int k = 0; k < n; k++)
    {
        cin >> B[k];
    }
}

void Diagonal::Get (int i, int j)
{
    if (i == j)
        cout << "%d " << B[i - 1];
    else
        cout << "0 ";
}

void Diagonal::Set (int i, int j, int y)
{
    if (i == j)
        B[i - 1] = y;
}

void Diagonal::Display ()
{
    cout << "Matrix is: \n";
    for (int r = 0; r < n; r++)
    {
       for (int c = 0; c < n; c++)
       {
         if (r == c)
         {
             cout << B[r] << " ";
         }
         else
         {
             cout << "0 ";
         }
       }
       cout << "\n";
    }
}

Diagonal::~Diagonal ()
{
    delete[]B;
}

int main ()
{
    int n, ch, y, i, j;

    cout << "Enter Dimension of Matrix: ";
    cin >> n;
    Diagonal dm (n);

    do
    {
        cout << "\n1. Create Matrix\n";
        cout << "2. Get Matrix Element\n";
        cout << "3. Set Matrix Element\n";
        cout << "4. Display Matrix\n";
        cout << "0. Exit\n\n";

        cout << "Enter choice: ";
        cin >> ch;

        switch (ch)
        {
            case 1:
              dm.Create ();
              break;

         case 2:
             cout << "Enter Indices: \n";
             cin >> i >> j;
             dm.Get (i, j);
             break;
        
         case 3:
             cout << "Enter row, column and element:\n";
             cin >> i >> j >> y;
             dm.Set (i, j, y);
             break;

         case 4:
             dm.Display ();
             break;

            cout << "Enter choice: ";
            cin >> ch;
        }
    }
    while (ch > 0);
    getchar ();
}


/* 1. Create Matrix
2. Get Matrix Element
3. Set Matrix Element
4. Display Matrix
0. Exit

Enter choice: 1
Enter non-zero elements of Diagonal Matrix:
2 3 4 5

1. Create Matrix
2. Get Matrix Element
3. Set Matrix Element
4. Display Matrix
0. Exit

Enter choice: 4
Matrix is: 
2 0 0 0 
0 3 0 0 
0 0 4 0 
0 0 0 5 

1. Create Matrix
2. Get Matrix Element
3. Set Matrix Element
4. Display Matrix
0. Exit

Enter choice: 0 */