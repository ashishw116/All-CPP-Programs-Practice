//Write a program to illustrate the overloading of >> and << operators on different objects of a class.
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
    void operator<<(int val)
    {
        n<<=val;
    }
    void operator>>(int val)
    {
        n>>=val;
    }
};
int main()
{
    Data d;
    d.setData(23);
    d.getData();
    d<<2;
    d.getData();
    cout<<"\n\n";
    d.getData();
    d>>2;
    d.getData();
    return 0;
}
