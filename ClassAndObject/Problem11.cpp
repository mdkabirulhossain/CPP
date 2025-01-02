#include<iostream>
#include<string>
using namespace std;

class Triangle{
    private:
        double side1;
        double side2;
        double side3;

    public:
        Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3){};

        void determinType(){
            if(side1 == side2 && side2 == side3){
                cout<<"This is equilaterial triangel"<<endl;
            }
            else if(side1 == side2 || side1 == side3 || side2== side3){
                cout<<"This is scalene triangle"<<endl;
            }
            else{
                cout<<"This is isosceles triangle"<<endl;

            }
        }
};

int main(){
    double value1, value2, value3;
    cout<<"Please enter the triangle 3 value: "<<endl;
    cin>>value1;
    cin>>value2;
    cin>>value3;
    Triangle T1(value1, value2, value3);
    T1.determinType();
    return 0;
}