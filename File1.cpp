#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){

    string msg="this is first text";
    ofstream fst("myfile.txt");
    fst<<msg<<endl;
    fst.close();
}