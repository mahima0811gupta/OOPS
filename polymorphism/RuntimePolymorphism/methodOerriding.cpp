// Run-Time Polymorphism (Dynamic Polymorphism)
// Decided at runtime.
// Achieved using Method Overriding (with inheritance + virtual functions).
// Rules:
// Same function name.
// Same parameter list.
// // Must be in inheritance.

// Base Class Pointer and Derived Object
// A base class pointer can point to a derived class object.
// Without virtual keyword → base class function executes.
// With virtual keyword → derived class function executes (runtime polymorphism).





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
