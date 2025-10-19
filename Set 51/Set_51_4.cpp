//WAP to find biggest of two numbers where one number is inherited from super class with its data members.
#include<iostream>
using namespace std;
class Test1
{
public:
    int x;
};
class Test2 : public Test1
{
public:
    int y;
    Test2(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    int findBiggest()
    {
        return x>y?x:y;
    }
};
int main()
{
    Test2 t2(3,4);
    cout << "Biggest number: " << t2.findBiggest() << endl;
    return 0;
}
