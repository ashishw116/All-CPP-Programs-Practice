//Write a program to illustrate the use of pointers to an object.
#include<iostream>
using namespace std;
class Test
{
public:
    void printF()
    {
        cout<<"Test Class Object.";
    }
};
int main()
{
    Test *ptr1=new Test();
    ptr1->printF();
    return 0;
}
