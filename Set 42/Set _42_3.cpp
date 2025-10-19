//Write a program to get the reverse of a number, Assign the value to the data members using the objects. And the class is having one member function as getReverse.
#include<iostream>
using namespace std;
class Reverse
{
public:
    int num;
    int getReverse()
    {
        int rev=0;
        while(num>0)
        {
            int rem=num%10;
            rev=rev*10+rem;
            num/=10;
        }
        return rev;
    }
};
int main()
{
    Reverse rev;
    rev.num=34;
    cout<<"Reverse is = "<<rev.getReverse();

    return 0;
}
