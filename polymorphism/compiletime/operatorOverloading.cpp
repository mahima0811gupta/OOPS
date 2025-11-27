
Operator Overloading means giving additional meaning to an existing operator so that it can work with user-defined data types (classes/objects).
Example:
+ normally works only with built-in data types like int, float, double, etc.
But if you want the same + operator to add two objects, you must overload it.



#include <iostream>
using namespace std;

class Add {
public:
    int x;             //     The class has one variable: x Every object (a, b, c) will have its own x.

    Add operator+(Add obj) {
        Add temp;
        temp.x = x + obj.x;   // add values of both objects                       
        return temp;
    }
};
// happens here?
// When you write a + b, C++ calls this function.
// a is the calling object
// b goes into obj
// Inside the function:

// x → means a.x
// obj.x → means b.x
// So temp.x = a.x + b.x
// Finally, temp is returned.


int main() {
    Add a, b, c;

    a.x = 5;
    b.x = 10;

    c = a + b;  // calls operator+

    cout << c.x;  // prints 15
}
