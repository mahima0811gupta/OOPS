//combination of more than one type of inheritance

#include<iostream>
using namespace std;



class Humen{
    public:
    int age=40;
    int weight=90;
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};
// Hierarchical inheritance (both Ram and Sita inherit from Human)
class Ram:public Humen{
    public:
    string color;

};

class Sita:public Humen{
   public:
   int height;

};

// Multilevel inheritance (Lakshman inherits from Sita which inherits from Human)
class Lakshman : public Sita {
public:
    int speed = 20;
};

int main(){
    Ram r;
    Sita s;
    Lakshman l;

    
    r.speak();   // Inherited from Human
    s.speak();   // Inherited from Human
    l.speak();   // Inherited via Sita -> Human

};
