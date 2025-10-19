//Write a program to find the sum of two integers after reversing them using a static member function.
#include<iostream>
using namespace std;
class Test
{
    public:
    static int reverseNum(int n)
    {
        int rev=0;
        while(n>0)
        {
            int d=n%10;
            rev=rev*10+d;
            n/=10;
        }
        return rev;
    }
    void sum(int a,int b)
    {
        cout<<Test::reverseNum(a)+Test::reverseNum(b);
    }
};
int main()
{
    Test t;
    t.sum(123,321);
    return 0;
}
