#include<iostream>
using namespace std;


class Animal{
    public:
    int age=40;
    int weight;

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class Dog:public Animal{
    public:
    string color;

};

class GermanShepher:public Dog{
   public:
   int speed;

};

int main(){
    GermanShepher  g;
    g.speak();
   cout<<g.age<<endl;
};