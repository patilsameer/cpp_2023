#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> myset;

    myset.insert(1);
    myset.insert(2);
    myset.insert(2); // set will always keep uniq value no duplicates are allowed

    cout<<myset.count(2)<<endl;

    cout<<"serarching for 2"<<endl;
    cout<<"2 found at index ="<<*(find(myset.begin(),myset.end(),2))<<endl;
    
}