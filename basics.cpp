#include<iostream>
using namespace std;
class Hero{
   //properties   //data members
   /// data member by default private hota h..so taht's why we write public to access from anywhere
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