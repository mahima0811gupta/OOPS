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

Explanation
Class X has a private member a.
The friend class Y; declaration gives all functions of class Y access to the private and protected members of X.
Hence, Y::show() can directly access obj.a.


 dvantages
✅ Provides controlled access to private data.
✅ Avoids repeated friend declarations for multiple functions.
✅ Useful for related classes that frequently interact.

⚠️ Disadvantages
❌ Breaks encapsulation (private data becomes accessible outside).
❌ Increases coupling between classes (tight dependency).
❌ Can make debugging and maintenance harder in large projects.   
