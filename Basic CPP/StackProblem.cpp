#include<bits/stdc++.h>
using namespace std;

#define MAX_SIZE 100
class Stack
{
private:
    /* data */
    int top;
    int arr[MAX_SIZE];

public:
    Stack(){
        top = -1;
    }

    bool push(int x){
        if(top >= MAX_SIZE -1) {
            cout<<"Stack is Ful"<<endl;
            return false;
        }
        arr[++top] = x;
        return true;
    }
    
    int pop(){
        if(top < 0){
            cout<<"Stack is Underflow"<<endl;
            return 0;
        }
        return arr[top--];
    }

    int peek(){
        if(top < 0){
            cout<<"Stack is empty"<<endl;
            return 0;
        }
        return arr[top];
    }

    bool isEmpty(){
        return (top < 0);
    }
    void display() {
        if (top < 0) {
            cout << "Stack is empty" << endl; 
        }
        cout << "\nStack elements: ";
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " "; 
        cout << endl;
    }


};

int main(){
    Stack s;
    cout<<"Check the stack is empty or Not"<<endl;
    cout<<"Empty: "<<s.isEmpty() <<endl;

    cout<<"Intert some stack elements ";
    s.push(7);
    s.push(1);
    s.push(5);
    s.push(3);
    s.push(8);
    cout<<"Now all the stack element is:"<<endl;
    s.display();
    cout<<"PoP: ";
    cout<<s.pop();
    cout<<"Top element of the stack: ";
    cout<<s.peek();
    cout<<endl;
    return 0;
}