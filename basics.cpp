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
    Hero ram;
    ram.health=50;
    ram.level='A';
    cout<<"heath is"<<ram.health<<endl;
   cout<<"Level is"<<ram.level<<endl;
}