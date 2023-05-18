#include<iostream>
using namespace std;

class Demo{
    public:
        virtual void display_the_project()=0;
};

class SoftwareDemo:public Demo{
    public:
        void display_the_project(){
            cout<<"use computer"<<endl;
        }
};
int main(){

    SoftwareDemo d;
}