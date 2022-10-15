#include <iostream>
using namespace std;

class Airthmatic {
   private:
    int a, b;

   public:
   Airthmatic(int a, int b);
   int add();
   int sub();
};
    Airthmatic::Airthmatic(int a, int b) {
        this->a = a;
        this->b = b;
    }
    int Airthmatic::add() {
        int c;
        c = a + b;
        return c;
    }
    int Airthmatic::sub() {
        int c;
        c = a - b;
        return c;
    }

int main() {
    Airthmatic ar(35,10),ar1(45,10);
    cout<<"sum="<<ar.add()<<endl;
    cout<<"sub="<<ar.sub()<<endl;
    cout<<"sum="<<ar1.add()<<endl;
    cout<<"sub="<<ar1.sub()<<endl;
}