#include<iostream>

using namespace std;

class Room{
    public:
        double length;
        double breadth;
        double height;

        double calculate_area(){
            return length*breadth;
        }

        double clacuulate_volume(){
            return length * breadth * height;
        }
};

int main(){
    Room room;

    cout<<"Enter the Length value: "<<endl;
    cin>>room.length;

    cout<<"Enter the breadth value: "<<endl;
    cin>>room.breadth;
    cout<<"Enter the height value:" <<endl;
    cin>>room.height;

    cout<<"Area: "<<room.calculate_area()<<endl;

    cout<<"Volume: "<<room.clacuulate_volume()<<endl;

    return 0;
    }