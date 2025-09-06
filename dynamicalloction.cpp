#include<iostream>
using namespace std;
class Hero{
   //properties
   public:
   int health;
   char level;


};



int main(){
    //creating object

    ///this is static allocation //sstack memory 
    Hero a;
    a.health=50;
    a.level='A';
    cout<<"heath is"<<a.health<<endl;
   cout<<"Level is"<<a.level<<endl;




   //this is dynamic allocation
   //heap memory
    //dynamic allocation is used when we don't know the size of object at compile time

   Hero *h=new Hero;
   //h to address h
   (*h).health=40;
   (*h).level='a';

;  cout<<"heath is"<<(*h).health<<endl;
   cout<<"Level is"<<(*h).level<<endl;

   //or we can use arrow operator

   h->health=60;
   h->level='B';
    cout<<"heath is"<<h->health<<endl;
   cout<<"Level is"<<h->level<<endl;


}