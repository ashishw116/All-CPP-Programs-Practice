//Write a program to find the Average of Three numbers using the class template.
#include<iostream>
using namespace std;
template <class T>
class Numbers
{
private:
    T n1,n2,n3;
public:
    void setData()
    {
        cout<<endl<<"Enter 3 Numbers : ";
        cin>>n1>>n2>>n3;
    }
    T getAverage()
    {
        return (n1+n2+n3)/3.0;
    }
};
int main()
{
    Numbers<int> n;
    n.setData();
    cout<<endl<<"Average : "<<n.getAverage();

    Numbers<float> n1;
    n1.setData();
    cout<<endl<<"Average : "<<n1.getAverage();
    return 0;
}
