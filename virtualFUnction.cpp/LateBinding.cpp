// virtual is required in the base to enable polymorphism.
// override is optional in the derived, but it’s good practice to use it (helps avoid bugs).

#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {   // virtual keyword
        cout << "Base class show()" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {  // overriding base function
        cout << "Derived class show()" << endl;
    }
};

int main() {
    Base* ptr;
    Derived d;   ///object of derived class
    ptr = &d;
    ptr->show();  // Output: Derived class show() (late binding)

    return 0;
}
