//WAP to find the average of 3 numbers using parameterized constructor
#include<iostream>
#include<cmath>
using namespace std;
class Test
{
public:
    int a,b,c;
    Test(int a,int b,int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
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

