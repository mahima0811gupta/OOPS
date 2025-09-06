#include<iostream>
using namespace std;


class Humen{   //super class
    public:
    int age;
    int height;
    int weight;
   public:
    int getAge(){
        return this->age;

    }
    int setWeight(int w){
        this->weight=w;
    }
};

class Male:public Humen{   //child class
   public:
   string color;
   void sleep(){
    cout<<"male is sleeping"<<endl;
   }
};
int main(){
    Male obj1;
    obj1.age=20;
    obj1.height=5;
    obj1.color="fair";

    cout<<obj1.age<<endl;
    cout<<obj1.color<<endl;
    obj1.setWeight(20);
    cout<<obj1.weight<<endl;
    obj1.sleep();

     return 0;

}