//A pure virtual function is a virtual function in a base class that has no implementation and must be overridden by derived classes.

#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() = 0;   // pure virtual function
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show()" << endl;
    }
};

int main() {
    Base* ptr;   // base class pointer
    Derived d;   // derived class object
    ptr = &d;    // pointer points to derived object
    ptr->show(); // ✅ Output: Derived class show()
    return 0;
}
