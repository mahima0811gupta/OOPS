
// operator overloading allows us to redefine the meaning of operators (like +, -, *, <<, etc.) for user-defined data types (like classes).
//  Basically, we make operators work with objects.
// Some operators like ::, sizeof, ?:, and . cannot be overloaded.

#include<iostream>
using namespace std;

class B {
    public:
    int a;
    int b;

    public: 
    int add() {
        return a+b;
    }

    void operator+ (B &obj) {
/*        int value1 = this -> a;
        int value2 = obj.a;
        cout << "output " << value2 - value1 << endl; 
        */

       cout << "Hello Babbar" << endl;
    }

    void operator() () {
        cout << "main Bracket hu " << this->a << endl;
    }

};