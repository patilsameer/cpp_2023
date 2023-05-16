#include<iostream>
using namespace std;
class Demo{
    public:
        int value;
        Demo(int val):value(val){}
        Demo(){}
        operator int()
        {
            return 1;
        }
};

int main(){
    Demo d;
    int i=d;
    cout<<i<<endl;
    Demo d2=11;
    cout<<d2.value<<endl;
}