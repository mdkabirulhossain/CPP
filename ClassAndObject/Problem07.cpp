#include<iostream>
using namespace std;

class Rectangle{
    private:
        double length;
        double width;
    
    public:
        Rectangle(double len, double wid): length(len), width(wid) {}

        double calculateArea(){
            return length * width;
        }

        double calculatePerimeter(){
            return 2* length* width;
        }
};


int main(){
    double lenght;
    double width;

    cout<<"Please enter the width and height: ";
    cin>>lenght;
    cin>>width;

    Rectangle ract(lenght, width);

    cout<<"Calculate Rectangle Area: ";
    cout<<ract.calculateArea();

    cout<<endl<<"Perimeter: ";
    cout<<ract.calculatePerimeter();

    return 0;
}