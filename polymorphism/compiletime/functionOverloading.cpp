// Compile-Time Polymorphism (Early Binding)
// Function Overloading
// Same function name, but different argument list (number or type).
// Cannot overload only by changing return type.

#include <iostream>
using namespace std;

class Print {
public:
    void show(int x) {
        cout << "Integer: " << x << endl;
    }
    void show(double y) {
        cout << "Double: " << y << endl;
    }
};

int main() {
    Print p;
    p.show(10);     
    p.show(3.14);   
}
