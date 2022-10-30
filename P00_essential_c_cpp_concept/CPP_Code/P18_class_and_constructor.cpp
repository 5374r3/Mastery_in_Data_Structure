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
    Rectangle(int len, int bre) {
        length = len;
        breadth = bre;
    }
    int area() {
        return length * breadth;
    };
    int perimeter() {
        return 2 * (length + breadth);
    };
    int getLength() { return length; }
    void setLength(int l) {
        length = l;
    }
    ~Rectangle() {
        cout << "Destructor call";
    };
};

int main() {
    Rectangle r(10, 15);
    int ar = r.area();
    int peri = r.perimeter();
    cout << "area = " << ar << endl
         << "perimeter= " << peri << endl;
    r.setLength(20);
    cout << r.getLength() << endl;
    return 0;
}