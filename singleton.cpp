#include<iostream>
using namespace std;

class Person{
    private:
        Person(){

        }
    public:
        static Person *p;
        static Person * getInstance(){
           if(p==NULL){
                 p=new Person();
           }
           
            return p;
        }

        Person(const Person &)=delete;

       static void display(){
        cout<<"THS IS A STATIC FUNCITON IN PERSON"<<endl;
       }

       void data(){
            cout<<"data method";
       }
};

Person * Person::p=NULL;
int main(){
   Person *p1=Person::getInstance();
   Person::display();
   p1->data();
}