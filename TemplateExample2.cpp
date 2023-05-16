#include<iostream>
using namespace std;


template<typename T>
class Stack{
    public:
        int top;

        Stack(){
            top=-1;
        }
        T arr[10];

        void push(T data){
            top++;
            arr[top]=data;
        }

        T pop(){
            return arr[top--];
        }

        T peek(){
            return arr[top];
        }
};  


int main(){

    Stack<int> istack;

    istack.push(1);
    istack.push(2);
    cout<<istack.peek()<<endl;
    istack.pop();
    cout<<istack.peek()<<endl;
    
    Stack<char> cstack;

    cstack.push('a');
    cstack.push('b');
    cout<<cstack.peek()<<endl;
}

