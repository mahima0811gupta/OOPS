#include<iostream>
using namespace std;

//one class serve as parent class for more than one class

class Humen{
    public:
    int age=40;
    int weight=90;
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};


// Derived classes (all inherit from Human → Hierarchical)
class Ram:public Humen{
    public:
    string color;

};

class Sita:public Humen{
   public:
   int height;

};

class Bharat:public Humen{
    public:
    int speed;
};

int main(){
    Ram r;
    Sita s;
    r.speak();
    s.speak();
    r.age=60;
    s.age=50;
    cout<<r.age<<endl;
    cout<<s.age<<endl;
    Bharat b;
   cout<<b.weight<<endl;

}