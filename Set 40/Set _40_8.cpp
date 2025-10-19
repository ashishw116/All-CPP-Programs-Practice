//Write a program to take the three points of triangle. Check if a triangle is forming or not. If the triangle is forming then print the type of the triangle using conditional operator.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x1, y1, x2, y2, x3, y3;
    cout << "Enter coordinates of first point (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter coordinates of second point (x2 y2): ";
    cin >> x2 >> y2;
    cout << "Enter coordinates of third point (x3 y3): ";
    cin >> x3 >> y3;
    float a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    float b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    float c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    if (a+b>c && b+c>a && c+a>b)
    {
        string triangleType = (a == b && b == c) ? "Equilateral Triangle"
            :(a == b || b == c || a == c) ? "Isosceles Triangle"
            :"Scalene Triangle";
        cout << "Triangle is formed." << endl;
        cout << "Type: " << triangleType << endl;
    }
    else
    {
        cout << "Points are collinear. Triangle cannot be formed." << endl;
    }

    return 0;
}

