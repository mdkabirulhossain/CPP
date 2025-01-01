#include <iostream>
#include <cmath> // Use <cmath> for C++ style math functions
using namespace std;

const double PI = 3.1416;

class Circle {
private:
    double radius;

public:
    Circle(double rad) : radius(rad) {}

    double calculateArea() {
        return PI * pow(radius, 2);
    }

    double calculateCircumference() {
        return 2 * PI * radius; // Formula to calculate the circumference of a circle
    }
};

int main() {
    double radius;
    cout << "Input the radius value: ";
    cin >> radius;

    Circle circle(radius);

    double area = circle.calculateArea();
    cout << "Area: " << area << endl;

    double circumference = circle.calculateCircumference();
    cout << "Circumference: " << circumference << endl;

    return 0;
}
