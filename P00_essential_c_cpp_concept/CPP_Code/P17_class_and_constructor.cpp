#include <iostream>
using namespace std;

class Rectangle {
   private:
    int length, breadth;

   public:
    Rectangle() {
        length = 1;
        breadth = 1;
    }
    Rectangle(int len, int bre);
    int area();
    int perimeter();
    int getLength() { return length; }
    void setLength(int l) {
        length = l;
    }
    ~Rectangle();
};

Rectangle::Rectangle(int l, int b) {
    length = l;
    breadth = b;
}
int Rectangle::area() {
    return length * breadth;
}
int Rectangle::perimeter() {
    return 2 * (length + breadth);
}
Rectangle::~Rectangle() {
    cout << "Destructor call";
}

int main() {
    Rectangle r(10, 5);
    int ar = r.area();
    int peri = r.perimeter();
    cout << "area = " << ar << endl
         << "perimeter= " << peri << endl;
    r.setLength(20);
    cout<<r.getLength()<<endl;
    return 0;
}