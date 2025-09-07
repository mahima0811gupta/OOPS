// for hiding data for security
/// binding data and function together
//encapulatsion -unit     testing
#include<iostream>
using namespace std;
class Student{
  private:
    string name;
    int age;
    int height;

    public:
    int getAge(){
        return this->age;
    }
};
    int main(){
        Student s1;
      cout<<s1.getAge()<<endl;
    
return 0;
    }
