#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    string cls;
    int roll;
    double mark;

public:
    Student(string n, string cl, int rol, double mar) : name(n), cls(cl), roll(rol), mark(mar) {}

    // Move this function to the public section and fix spelling
    string calculateGrade(double mark)
    {
        if (mark >= 90)
        {
            return "A+";
        }
        else if (mark >= 80 && mark < 90)
        {
            return "B+";
        }
        else
        {
            return "C+";
        }
    }
};

int main()
{
    string name;
    string cls;
    int roll;
    double mark;

    cout << "Please Enter the name: ";
    getline(cin, name);
    cout << "Please Enter the class: ";
    getline(cin, cls);
    cout << "Please Enter the roll: ";
    cin >> roll;
    cout << "Please Enter the marks: ";
    cin >> mark;

    Student st(name, cls, roll, mark);
    string grade = st.calculateGrade(mark); // Fixed spelling
    cout << "Grade: " << grade << endl;     // Added a meaningful message
    return 0;
}
