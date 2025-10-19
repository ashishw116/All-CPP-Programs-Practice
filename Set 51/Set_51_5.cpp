//WAP to find average of 3 numbers where all the three numbers are derived from different class in multilevel inheritance using different input Function ( Do not Overload the Functions).
#include<iostream>
using namespace std;
class Test1
{
public:
    int x;
    void setX(int x)
    {
        this->x=x;
    }
};
class Test2 : public Test1
{
public:
    int y;
    void setY(int y)
    {
        this->y=y;
    }
};
class Test3 : public Test2
{
public:
    int z;
    void setZ(int z)
    {
        this->z=z;
    }
    double findAvg()
    {
        return (double)(x+y+z)/3;
    }
};
int main()
{
    Test3 t3;
    t3.setX(6);
    t3.setY(3);
    t3.setZ(1);
    cout << "Avg : " << t3.findAvg() << endl;
    return 0;
}
