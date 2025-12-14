

#include <iostream>
using namespace std;

class Student {
private:
    int age;

public:
    // Normal constructor
    Student(int a) {
        age = a;
    }

    // Copy constructor
    Student(const Student &s) {
        age = s.age;   // copying value
    }

    void show() {
        cout << "Age = " << age << endl;
    }
};

int main() {
    Student s1(20);   // normal object
    Student s2 = s1;  // copy constructor is called

    s1.show();
    s2.show();
}
output
Age = 20
Age = 20
