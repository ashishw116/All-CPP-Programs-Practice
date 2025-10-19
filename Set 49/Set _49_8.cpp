//Write a program to find the sum of two complex numbers using operator overloading.
#include<iostream>
#include<cmath>
using namespace std;
class Complex
{
    int real,img;
public:
    void setData(int real,int img)
    {
        this->real=real;
        this->img=img;
    }
    void getData()
    {
        cout<<real<<"+ "<<img<<"i "<<endl;
    }
    Complex operator+(Complex c2)
    {
        Complex result;
        result.real=this->real+c2.real;
        result.img=this->img+c2.img;
        return result;
    }
};
int main()
{
    Complex c1,c2;
    c1.setData(10,7);
    c2.setData(15,2);
    c1.getData();
    c2.getData();
    Complex c3=c1+c2;
    cout<<"------------- "<<endl;
    c3.getData();
    return 0;
}
