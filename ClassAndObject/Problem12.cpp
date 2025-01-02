#include<iostream>
#include<string>
using namespace std;

class Employee
{
private:
    /* data */
    string name;
    int employeeID;
    double salary;
public:
    Employee(string n, int e, double s) : name(n), employeeID(e), salary(s) {};

    void calculateSalary(double performanceRating){
        if(performanceRating >= 0 && performanceRating <= 5){
            salary *= 2;
        }
        else {
            salary *= 3;
        }
    }

    void setSalary(double sa){
        salary = sa;
    }
    double getSalary(){
        return salary;
    }
};

int main(){
     string name;
    int employeeID;
    double salary;
    double per;

    cout<<"Please enter the name, employee ID and Salary: "<<endl;
    cin>> name >>employeeID >> salary;

    Employee e1(name, employeeID, salary);

    cout<<"Initial Salary: "<< e1.getSalary()<<endl;
    

    cout<<"Enter the performance rating: "<<endl;
    cin>> per;
    cout << "After Performance Rating: " << endl;
    e1.calculateSalary(per);
    cout<<e1.getSalary() << endl;

}