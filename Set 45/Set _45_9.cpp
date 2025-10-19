//Write a program to illustrate the use of static member function by printing a text.
#include<iostream>
using namespace std;
class Test
{
    public:
    static void display()
    {
        cout<<"Hello";
    }
};
int main()
{
    Test::display();
    return 0;
}
