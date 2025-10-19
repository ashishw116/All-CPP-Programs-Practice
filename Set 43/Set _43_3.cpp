//WAP to print sum of two complex numbers by using object as argument (by returning object, Pass two objects as arguments).
#include<iostream>
#include<cmath>
using namespace std;
class Complex
{
public:
    int real,img;
    void setData(int x,int y)
    {
        real=x;
        img=y;
    }
    Complex getSum(Complex c1,Complex c2)
    {
        Complex addition;
        addition.real=c1.real+c2.real;
        addition.img=c1.img+c2.img;
        return addition;
    }
    void display()
    {
        cout<<real<<" + " <<img<<"i\n";
    }
};
int main()
{
    Complex c1,c2;
    c1.setData(2,3);
    c2.setData(5,7);
    Complex c3=c1.getSum(c1,c2);
    c1.display();
    c2.display();
    cout<<"---------\n";
    c3.display();
    return 0;
}
