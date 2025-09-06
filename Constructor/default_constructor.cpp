#include<iostream>
using namespace std;
class Hero{
   //properties
   public:
   int health;
   char level;
   
   Hero(){
    cout<<"Default Constructor is called"<<endl;
   }

};



int main(){
    //creating object
    Hero ram;
    Hero *h=new Hero;// dynamiclly
    
}