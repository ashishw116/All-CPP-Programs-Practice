/*WAP to create a class which contains an integer array as data member and create a parameterized constructor to assign the values for the data members. Pass the object of this class to a method of another class to calculate mean and standard deviation and embed this mean and standard deviation into an object of another class called Datakeeper and return the object to the main and print mean and standard deviation.*/
#include<iostream>
#include<cmath>
using namespace std;
class Complex
{
public:
    int real,img;
    Complex()
    {
        real=10;
        img=5;
    }
    Complex(int real,int img)
    {
        this->real=real;
        this->img=img;
    }
    void showData()
    {
            cout<<"\n"<<real<<" + "<<img<<"i";
    }
};
class Sum
{
public:
    Complex addition(Complex c1,Complex c2)
    {
        Complex sum;
        sum.real=c1.real+c2.real;
        sum.img=c1.img+c2.img;
        return sum;
    }
};
int main()
{
    Complex c1,c2(15,12);
    c1.showData();
    c2.showData();
    Sum s;
    Complex c3=s.addition(c1,c2);
    cout<<"\n------------";
    c3.showData();
    return 0;
}

