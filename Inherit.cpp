#include<iostream>
#include<string.h>
using namespace std;


class Person{
    public:
        void who_i_am(){

            cout<<"i am a Person"<<endl;
        }

};

class Teacher: public Person{
    public:
       void who_i_am(){

            cout<<"i am a Teacher"<<endl;
        }

};
class Student :public Person{
    public:
         void who_i_am(){

            cout<<"i am a Student"<<endl;
        }
        
};

int main(){
    Student s1;
    s1.who_i_am();
    Teacher t1;
    t1.who_i_am();
    Person p1=s1;
    p1.who_i_am();
    p1=t1;
    p1.who_i_am();
    Person *p2=new Student();
    
    
   

}