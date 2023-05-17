#include<iostream>
using namespace std;

class Student{
    public:
        int marks;

        bool operator <(Student &obj){
            if(this->marks<obj.marks)
                return true;
            return false;
        }
        bool operator >(Student &obj){
            if(this->marks>obj.marks)
                return true;
            return false;
        }
};

int main(){
    Student s1;
    s1.marks=1;
    Student s2;
    s2.marks=11;

    if(s1<s2)
        cout<<"s1 is < s2"<<endl;
    else if( s1>s2)
        cout<<"s1 is > s2"<<endl;
    else
        cout<<"s1 == s2"<<endl;
}