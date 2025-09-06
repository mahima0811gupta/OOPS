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

int main(){
    Dog d;
    d.speak();
   cout<<d.age<<endl;
};