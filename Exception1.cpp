#include<iostream>
using namespace std;


class Stack{
    public:
        int top;
        int arr[10];

        class OverFlow{
                public:
                    string msg;
                
                OverFlow(string msg){
                    this->msg=msg;
                }
        };

        class UnderFlow{
                UnderFlow(string msg){
                    this->msg=msg;
                }
        };
        Stack(){
            top=-1;
        }

        void push(int value){
            top++;
            arr[top]=value;
        }

        int pop(){
                if(top==-1)
                    throw UnderFlow();
                return arr[top--];
        }

        int peek(){
            if(top==-1)
                throw UnderFlow();
            return arr[top--];
        }
};

int main(){
    Stack stack;
    stack.push(1);
    stack.push(2);

    try{
        cout<<stack.pop();
        cout<<stack.pop();
        cout<<stack.pop();
    }
    catch(Stack::UnderFlow){
        cout<<"stack Underflow"<<endl;
    }
}