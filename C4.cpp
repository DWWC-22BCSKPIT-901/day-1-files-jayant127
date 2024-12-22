#include <iostream>
#include <cmath> // Include cmath for M_PI
using namespace std;

class ShapeArea {
public:
    // Calculate the area of a circle
    double area(double radius) {
        return 3.17 * radius * radius;
    }

    // Calculate the area of a rectangle
    double area(double length, double breadth) {
        return length * breadth;
    }

    // Calculate the area of a triangle
    double area(double base, double height, bool isTriangle) {
        return 0.5 * base * height; // ½ × b × h
    }
};

int main() {
    ShapeArea shape;

    // Input and calculate the area of a circle
    cout << "Enter the radius of the circle: ";
    double radius;
    cin >> radius;
    cout << "Area of the circle: " << shape.area(radius) << endl;

    // Input and calculate the area of a rectangle
    double length, breadth;
    cout << "\nEnter the length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Area of the rectangle: " << shape.area(length, breadth) << endl;

    // Input and calculate the area of a triangle
    double base, height;
    cout << "\nEnter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of the triangle: " << shape.area(base, height, true) << endl;

    return 0;
}
