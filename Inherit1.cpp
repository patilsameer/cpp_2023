#include<iostream>
using namespace std;

class Person{
    private:
        int id;
    public:
    //    virtual void data2()=0;
       virtual void data(){
            cout<<"data method of Person"<<endl;
        }
       // Person(){}
};

class Student : public Person{
    public:
    //  void data2(){
    //     cout<<"this is data 2 in Student"<<endl;
    //  }
      void data(){
            cout<<"data method of Student"<<endl;
        }
};
int main(){
    Student s;
    s.data();
    Person p=s;
    p.data();

    Student *s1=new Student();
    Person *p1=s1;
    p1->data();
}