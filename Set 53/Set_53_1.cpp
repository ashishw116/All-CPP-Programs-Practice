//Write a program to illustrate the pointer to the object
#include<iostream>
using namespace std;
class Test
{
public:
    void display()
    {
        cout<<"This Message From Developer";
    }
};
int main()
{
    Test t;
    Test *p;
    p=&t;
    p->display();
    return 0;
}
