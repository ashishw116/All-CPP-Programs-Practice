//WAP to find the average of an array using parameterized constructor
#include<iostream>
#include<cmath>
using namespace std;
class Test
{
public:
    int a[];
    Test(int a[],int n)
    {
        this->a[]=a[];
    }
    float getAvg()
    {
        return (float)(a+b+c)/3;
    }
};

int main()
{
    Test t(10, 20, 30);
    cout << "\nAverage of 3 numbers (10, 20, 30): " <<t.getAvg();
    return 0;
}

