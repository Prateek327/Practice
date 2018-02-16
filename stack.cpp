#include<iostream>
using namespace std;

#define MAX 1000

class Stack
{

    int top ;
    public:
    int a[MAX];
    Stack(){
    top = -1;}
    bool push(int x);
    int pop();
    bool isempty();
};
bool Stack::push(int b){
    if (top>=MAX){
    cout<<"Stack Overflow";
    return false;}
    else{
        a[++top]=b;
        return true;
    }
}

int Stack::pop(){
if(top<0){
cout<<"Stack Underflow";}
else{
int m = a[top];
--top;
return m;}}

bool Stack::isempty()
{
    if (top<0){
    return true;}
    else{
    return false;}
}

int main(){
Stack s;
s.push(50);
s.push(70);
cout<<s.pop();
return 0;
}

