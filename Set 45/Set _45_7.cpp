//Write a program to illustrate the use of static data members through counting the member function call.
#include<iostream>
using namespace std;
class Test
{
    public:
    static int count1;
    void fun1()
    {
        count1++;
    }
    void fun2()
    {
        count1++;
    }
    void display()
    {
        cout<<"Count is "<<count1;
    }
};
int Test::count1=0;
int main()
{
    Test t1,t2,t3,t4;
    t1.fun1();
    t2.fun1();
    t3.fun1();
    t4.fun1();
    t4.fun2();
    t3.fun2();
    t1.fun2();
    t1.display();
    return 0;
}
