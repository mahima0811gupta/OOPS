//inheritance ambiguity happens in C++ when a child class inherits from two (or more) parent classes, and those parents have a function (or variable) with the same name.

// Now, if you call that function from the child, the compiler gets confused (because it doesn’t know whether to use the parent’s version from Class A or Class B).

// to Resolve this ambiguity, you can use the scope resolution operator (::) to specify which parent class’s function you want to call.

#include<iostream>
using namespace std;

class A{
    public:
      void func(){
        cout<<"I am A"<<endl;
      }
};

class B{
    public:
      void func(){
        cout<<"I am B"<<endl;
      }
};

//mutilevel
class C:public A,public B{
   
};

int main(){
    C obj;
//  obj.func;
obj.A::func();
obj.B::func();

    output-I am A
           I am B
   


}


