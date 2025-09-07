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


#include<iostream>
using namespace std;
class Animal {
    public:
    void speak() {
        cout << "Speaking "<< endl;
    }
};

class Dog: public Animal {

    public:
    void speak() {
        cout << "Barking " << endl;
    }


};



int main() {

    Dog obj;
    obj.speak();

}


