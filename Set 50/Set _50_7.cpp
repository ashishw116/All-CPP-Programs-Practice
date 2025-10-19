//Write a program to illustrate the overloading of -- operator.
#include<iostream>
#include<cmath>
using namespace std;
class Data
{
    int n;
public:
    void setData(int n)
    {
        this->n=n;
    }
    void getData()
    {
        cout<<"\n Num : "<<n<<endl;
    }
    void operator--()
    {
        --n;
    }
};
int main()
{
    Data d;
    d.setData(23);
    d.getData();
    --d;
    d.getData();
    return 0;
}
