#include<iostream>
using namespace std;

template<typename T>
T add(T a,T b){
    return a + b;
}


int main(){
    int a=1;
    int b=2;

    cout<<add(1,2)<<endl;
    cout<<add(1.1,2.2)<<endl;
}