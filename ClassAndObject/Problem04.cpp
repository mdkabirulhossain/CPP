#include<iostream>
#include<string>
using namespace std;

class MyClass{
    public:
        void myMethod(){
            cout<<"Hi this is the method"<<endl;
        }
};

int main(){
    MyClass obj;
    obj.myMethod();
}