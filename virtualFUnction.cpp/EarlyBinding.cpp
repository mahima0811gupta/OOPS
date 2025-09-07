#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base class show()" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class show()" << endl;
    }
};

int main() {
    Base* ptr;
    Derived d;   ///object of derived class
    ptr = &d;   // base pointer → derived object
    ptr->show();  // Output: Base class show() (early binding)

    return 0;
}
