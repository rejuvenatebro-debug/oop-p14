#include <iostream>
using namespace std;

class Student {
public:
    void showMarks() {
        int marks = 80;
        int *ptr = &marks;
        int &ref = marks;

        cout << "Original Marks: " << marks << endl;
        cout << "Using Pointer: " << *ptr << endl;
        cout << "Using Reference: " << ref << endl;
    }
};

class Product {
public:
    void showPrice() {
        int *price = new int;
        *price = 500;

        cout << "Product Price: Rs. " << *price << endl;

        delete price;
        cout << "Memory released" << endl;
    }
};

int main() {
    Student s;
    s.showMarks();

    cout << endl;

    Product p;
    p.showPrice();

    return 0;
}
