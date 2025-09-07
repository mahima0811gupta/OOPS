// The static keyword in C++ is used to change the lifetime, visibility, or storage of a variable or function. It can be applied to:
// Variables (inside or outside a function, or in a class)
// Functions (member functions or global functions)

// TYPE  1 static data member  2.static member function

// 1.Static Data Member
// A static data member in C++ is a class member that is shared by all objects of the class.
// It is created only once for the entire class, not separately for each object.
// It is initialized to zero by default and must be defined outside the class.
///It is shared memory for all objects of the class and it retain its value between function calls.
Must be defined outside the class using the scope resolution operator ::.

// Note-n C++, when you create a class with normal (non-static) data members, each object gets its own separate copy of those variables.
// But if you declare a variable as static, then only one copy of that variable is created and shared among all objects of the class.


#include <iostream>
using namespace std;

class Demo {
    static int count;   // declaration
public:
    void increase() {
        count++;
    }
    void show() {
        cout << "Count = " << count << endl;
    }
};

// definition
int Demo::count = 0;

int main() {
    Demo d1, d2;
    d1.increase();
    d2.increase();
    d1.show();  // Count = 2
}
// d1 and d2 share the same static variable count



