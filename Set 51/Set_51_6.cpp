//WAP to find biggest of three numbers through the Multi- level Inheritance.
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
    int findBig()
    {
        return ((x>y)&&(x>z))?x: y>z? y: z;
    }
};
int main()
{
    Test3 t3;
    t3.setX(6);
    t3.setY(9);
    t3.setZ(10);
    cout << "Biggest number: " << t3.findBig() << endl;
    return 0;
}
