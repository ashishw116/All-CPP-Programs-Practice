//Write a program to illustrate the use of delete keyword.
#include<iostream>
using namespace std;
class Test
{
public:
    void printF()
    {
        cout<<endl<<"Test Class Object.";
    }
};
int main()
{
    Test *ptr1=new Test;
    ptr1->printF();
    delete ptr1;
    return 0;
}
