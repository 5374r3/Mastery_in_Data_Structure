#include <iostream>
using namespace std;
class Element
{
    public:
        int i;
        int j;
        int x;
};

class Sparse
{
    private:
        int m;
        int n;
        int num;
        Element *ele;
    public:
        Sparse (int m, int n, int num)
        {
            this->m = m;
            this->n = n;
            this->num = num;
            ele = new Element[this->num];
        }
        ~Sparse ()
        {
            delete[]ele;
        }

        Sparse operator + (Sparse & s);

        friend istream & operator >> (istream & is, Sparse & s);
        friend ostream & operator << (ostream & os, Sparse & s);
};

Sparse Sparse::operator + (Sparse & s)
{
    int i, j, k;
    if (m != s.m || n != s.n)
        return Sparse (0, 0, 0);
    Sparse *sum = new Sparse (m, n, num + s.num);

    i = j = k = 0;

    while (i < num && j < s.num)
    {
        if (ele[i].i < s.ele[j].i)
         sum->ele[k++] = ele[i++];
        else if (ele[i].i > s.ele[j].i)
         sum->ele[k++] = s.ele[j++];
        else
        {
         if (ele[i].j < s.ele[j].j)
             sum->ele[k++] = ele[i++];
         else if (ele[i].j > s.ele[j].j)
             sum->ele[k++] = s.ele[j++];
         else
         {
             sum->ele[k] = ele[i];
             sum->ele[k++].x = ele[i++].x + s.ele[j++].x;
         }
       }
    }

    for (; i < num; i++)
        sum->ele[k++] = ele[i];
    for (; j < s.num; j++)
        sum->ele[k++] = s.ele[j];
    sum->num = k;

    return *sum;
}

istream & operator >> (istream & is, Sparse & s)
{
    cout << "Enter non-zero elements:\n";
    for (int i = 0; i < s.num; i++)
        cin >> s.ele[i].i >> s.ele[i].j >> s.ele[i].x;
    return is;
}

ostream & operator << (ostream & os, Sparse & s)
{
    int k = 0;
    for (int i = 0; i < s.m; i++)
    {
        for (int j = 0; j < s.n; j++)
        {
         if (s.ele[k].i == i && s.ele[k].j == j)
             cout << s.ele[k++].x << " ";
         else
             cout << "0 ";
        }
        cout << endl;
    }
    return os;
}

int main ()
{
    Sparse s1 (3, 3, 4);
    Sparse s2 (3, 3, 4);

    cout << "Enter First Matrix:" << endl;
    cin >> s1;
    cout << "Enter Second Matrix:" << endl;
    cin >> s2;

    Sparse sum = s1 + s2;

    cout << "First Matrix" << endl << s1;
    cout << "Second MAtrix" << endl << s2;
    cout << "Sum Matrix" << endl << sum;

    return 0;
}


/* Enter First Matrix
Eneter Dimensions: 3 3
Number of non-zero: 4
Eneter non-zero Elements:
0 2 4
1 1 1
2 0 3
2 1 2
Enter Second Matrix
Eneter Dimensions: 3 3
Number of non-zero: 4
Eneter non-zero Elements:
0 1 1
1 0 4
2 1 2
1 2 8
First Matrix
0 0 4 
0 1 0 
3 2 0 
Second Matrix
0 1 0 
4 0 0 
0 2 0 
Sum Matrix
0 1 4 
4 1 0 
3 4 0 */