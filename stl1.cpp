#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);


    v.insert(v.begin(),0);

    vector<int>::iterator itr;

    itr=v.begin();
    for(itr;itr<v.end();itr++)
        cout<<*itr<<endl;


    v.erase(v.begin()+1);
    for(itr=v.begin();itr<v.end();itr++)
        cout<<*itr<<endl;


    v.pop_back();
    cout<<v.back()<<endl;
   
    itr=find(v.begin(),v.end(),2);
    cout<<"element 2 found at "<<itr-v.begin()<<endl;
}