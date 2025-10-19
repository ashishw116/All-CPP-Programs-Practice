//Write a program to check a given number is prime or not, assign the value to the data members using the objects. And the class is having one member function as isPrime.
#include<iostream>
using namespace std;
class Prime
{
public:
    int num;
    bool isPrime()
    {
        bool flag=true;
        for(int i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
                flag=false;
                break;
            }
        }
        return flag;
    }
};
int main()
{
    Prime pr;
    pr.num=7;
    cout<<"Number is "<<(pr.isPrime()?"prime ":"not prime ");
    return 0;
}
