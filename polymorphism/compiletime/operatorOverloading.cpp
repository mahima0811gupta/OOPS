
Operator Overloading means giving additional meaning to an existing operator so that it can work with user-defined data types (classes/objects).
Example:
+ normally works only with built-in data types like int, float, double, etc.
But if you want the same + operator to add two objects, you must overload it.



#include <iostream>
using namespace std;

class Add {
public:
    int x;             //     The class has one variable: x Every object (a, b, c) will have its own x.

   Add operator+(Add b) {
    Add c; 
    c.x = x + b.x;
    return c;
}

};
// This function runs when you write:
// a + b
// Inside the function:
// x means a.x (value of first object)
// b.x means b.x (value of second object)
// So this line:
// c.x = x+ b.x;

int main() {
    Add a, b, c;

    a.x = 5;
    b.x = 10;

    c = a + b;  // calls operator+

    cout << c.x;  // prints 15
}
