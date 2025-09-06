#include<iostream>
using namespace std;


class Animal{
    public:
    int age=30;
    int weight;

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class Humen{
    public:
    int height;
    int gender;

    void play(){
        cout<<"playing"<<endl;
    }
};
/////multiple inheritance
class Hybrid:public Animal,public Humen{
    public:
    int color;
};



int main(){
    Hybrid h;
   cout<<h.age<<endl;
    cout<<h.weight<<endl;
     cout<<h.height<<endl;
    h.play();
    h.speak();



}