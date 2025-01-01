#include<iostream>
#include<string>
using namespace std;

class Person{
    private:
        string name;
        int age;
        string country;

    public:
        void setName(const string &n){
            name = n;
        }
        string getName(){
            return name;
        }
        void setAge(int a){
            age = a;
        }
        int getAge(){
            return age;
        }

        void setCountry(const string &c){
            country = c;
        }

        string getCountry(){
            return country;
        }



};

int main(){

    Person p;
    p.setName("Kabirul");
    p.setAge(24);
    p.setCountry("Bangladesl");

    cout<<"Name: "<<p.getName()<<endl;
    cout <<"Age: "<<p.getAge()<<endl;
    cout<<"Country: "<<p.getCountry()<<endl;

    return 0;
}