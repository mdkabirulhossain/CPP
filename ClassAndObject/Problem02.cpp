#include<iostream>
#include<string>
using namespace std;

class myClass{
    public:
        string name;
        int age;
};

int main(){
    myClass obj1;

    obj1.name = "Kabirul";
    obj1.age = 24;

    cout<<"Name: "<<obj1.name <<endl;
    cout<<"Age: "<<obj1.age<<endl ;
    return 0;
}