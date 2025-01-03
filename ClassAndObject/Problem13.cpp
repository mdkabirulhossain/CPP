#include<iostream>
#include<string>

using namespace std;

class Date{
    private:
        int day;
        int month;
        int year;

    public:
        // Date(int d, int m, int y) : day(d), month(m), year(y) {};

        void setDay(int d){
            if(d > 0 && d<=30){
                day = d;
            }
            
        }
        void setMonth(int m){
            if(m > 0 && m<=12){
                month = m;
            }
            
        }
        void setYear(int y){
            if(y > 0 && y<=2026){
                year = y;
            }
           
            
        }

        int getDay(){
            return day;
        }
        int getMonth(){
            return month;
        }
        int getYear(){
            return year;
        }
}; 

int main(){
    Date date;
    cout<<"Please enter the day, month and Year: "<<endl;

    int day, month, year;
    cin>>day >>month >> year;
    
    date.setDay(day);
    date.setMonth(month);
    date.setYear(year);

    cout<<"Day: "<<date.getDay();
    cout<<" Month: "<<date.getMonth();
    cout<<" Year: "<<date.getYear();

}