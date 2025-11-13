//Write a program to find the sum of two numbers using the class template.
#include<iostream>
using namespace std;
template <class T>
class Numbers
{
private:
    T n1,n2;
public:
    void setData()
    {
        cout<<"Enter 2 Numbers : ";
        cin>>n1>>n2;
    }
    T sum()
    {
        return n1+n2;
    }
};
int main()
{
    Numbers<int> n;
    n.setData();
    cout<<endl<<"Sum : "<<n.sum();

    Numbers<float> n1;
    n1.setData();
    cout<<endl<<"Sum : "<<n1.sum();
    return 0;
}
