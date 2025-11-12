//Write a program to Inherit three classes called Complex, Array and Matrix into a class called Addition. Each of the super classes are having a member function called findAddition( ) to find the Addition of two Complex numbers, Addition of the Array elements and addition of matrix elements respectively using virtual functions.
#include<iostream>
using namespace std;
class RupeetoDollor
{
public:
    virtual double doConversion(int rup)
    {
        return  rup*0.01128;
    }
};
class RupeetoYen : public RupeetoDollor
{
public:
    double doConversion(int rup)
    {
        return  rup*1.746;
    }
};
class RupeetoPound : RupeetoYen
{
public:
    double  doConversion(int rup)
    {
        return  rup*0.00857;
    }
};
class RupeetoEuro : RupeetoPound
{
public:
    double doConversion(int rup)
    {
        return  rup*0.00983;
    }
};
class RupeetoDinar : RupeetoEuro
{
public:
    double  doConversion(int rup)
    {
        return  rup*0.00346;
    }
};
class Addition : public RupeetoDinar
{
public:
    void findAddition()
    {
        cout << "\n--- Addition of Different Types ---\n";
        cout << "1. Complex Numbers\n";
        cout << "2. Array Elements\n";
        cout << "3. Matrix Elements\n";

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            Complex::findAddition();
            break;
        case 2:
            Array::findAddition();
            break;
        case 3:
            Matrix::findAddition();
            break;
        default:
            cout << "Invalid choice!\n";
        }
    }
};
int main()
{
    Complex *ptr;
    Addition ac;
    ptr=&ac;
    ptr->findAddition();
    return 0;
}
