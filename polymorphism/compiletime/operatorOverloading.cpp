
Operator Overloading means giving additional meaning to an existing operator so that it can work with user-defined data types (classes/objects).
Example:
+ normally works only with built-in data types like int, float, double, etc.
But if you want the same + operator to add two objects, you must overload it.



#include <iostream>
using namespace std;

class Add {
public:
    int x;

    Add operator+(Add obj) {
        Add temp;
        temp.x = x + obj.x;   // add values of both objects
        return temp;
    }
};

int main() {
    Add a, b, c;

    a.x = 5;
    b.x = 10;

    c = a + b;  // calls operator+

    cout << c.x;  // prints 15
}
