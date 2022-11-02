#include <iostream>
using namespace std;

template <class T>
class Airthmatic {
   private:
    T a, b;

   public:
    Airthmatic(T a, T b);
    T add();
    T sub();
};

template <class T>
Airthmatic<T>::Airthmatic(T a, T b) {
    this->a = a;
    this->b = b;
}

template <class T>
T Airthmatic<T>::add() {
    T c;
    c = a + b;
    return c;
}

template <class T>
T Airthmatic<T>::sub() {
    T c;
    c = a - b;
    return c;
}

int main() {
    Airthmatic<int> ar(35, 10);
    cout << "sum = " << ar.add() << endl;
    cout << "sub = " << ar.sub() << endl;

    Airthmatic<float> ar1(35.41, 10.31);
    cout << "sum = " << ar1.add() << endl;
    cout << "sub = " << ar1.sub() << endl;


    Airthmatic< char> ar2('A', 'B');
    cout << "sum = " << (int)ar2.add() << endl;
    //65+66=131 but -125 because A single byte char cannot hold value greater than 255 (unsigned) or +127 (signed). 
    cout << "sub = " << (int)ar2.sub() << endl;//65-66=-1
}