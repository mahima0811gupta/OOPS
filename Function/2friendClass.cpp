// Friend Class
// When multiple functions of one class need to access the private/protected members of another class.
// Instead of declaring each function as friend, we can declare the whole class as a friend.
// Key Points
// All member functions of the friend class get access.
// Friendship is one-way (not mutual).
// Friendship is not inherited.
#include <iostream>
using namespace std;

class X {
private:
    int a = 5;

    // declare entire class Y as friend
    friend class Y;
};

class Y {
public:
    void show(X obj) {
        cout << "Value of a = " << obj.a << endl;
    }
};

int main() {
    X x1;
    Y y1;
    y1.show(x1);  // Y can access X's private data
    return 0;
}  OUTPUT-Value of a = 5

