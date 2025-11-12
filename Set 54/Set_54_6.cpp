//WAP to find whether a line is parallel to X-axis or not using points (x1,y1) & (x2, y2) and also find if it forms a triangle or not by taking three points (x1,y1), (x3,y3) & (x4,y4) where it has four classes P1, P2, P3 and P4.
#include<iostream>
using namespace std;
class Point1
{
private:
    int x1,y1;
public:
    void getPoint1()
    {
        cout << "Enter point 1 (x1 y1): ";
        cin >> x1 >> y1;
    }
    int getX1()
    {
        return x1;
    }
    int getY1()
    {
        return y1;
    }
};
class Point2 : public Point1
{
private:
    int x2,y2;
public:
    void getPoint2()
    {
        cout << "Enter point 2 (x2 y2): ";
        cin >> x2 >> y2;
    }
    void isParallel() {
        if (getY1() == y2)
            cout << "\nThe line joining (x1, y1) and (x2, y2) is PARALLEL to X-axis.\n";
        else
            cout << "\nThe line joining (x1, y1) and (x2, y2) is NOT parallel to X-axis.\n";
    }
    int getX2()
    {
        return x2;
    }
    int getY2()
    {
        return y2;
    }
};
class Point3 : public Point1
{
private:
    int x3, y3;
public:
    void getPoint3()
    {
        cout << "Enter point 3 (x3 y3): ";
        cin >> x3 >> y3;
    }
    int getX3()
    {
        return x3;
    }
    int getY3()
    {
        return y3;
    }
};
class Point4 : public Point3
{
private:
    int x4, y4;
public:
    void getPoint4()
    {
        cout << "Enter point 4 (x4 y4): ";
        cin >> x4 >> y4;
    }
    void findArea()
    {
        float area = 0.5 * ((getX1() * (getY3() - y4)) + (getX3() * (y4 - getY1())) + (x4 * (getY1() - getY3())));
        if (area == 0)
            cout << "\nThe given three points are COLLINEAR (do NOT form a triangle).\n";
        else
            cout << "\nThe given three points form a TRIANGLE.\n";
    }
};
int main()
{
    Point2 p2;
    Point4 p4;
    p2.getPoint1();
    p2.getPoint2();
    p2.isParallel();
    p4.getPoint3();
    p4.getPoint4();
    p4.findArea();
    return 0;
}
