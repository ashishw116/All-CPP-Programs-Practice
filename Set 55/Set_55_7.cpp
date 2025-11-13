//Write a program to find the biggest of Three numbers using the class template.
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
    T biggest()
    {
        return (n1>n2)&&(n1>n3)?n1:(n2>n3)?n2:n3;
    }
};
int main()
{
    Numbers<int> n;
    n.setData();
    cout<<endl<<"Average : "<<n.biggest();

    Numbers<float> n1;
    n1.setData();
    cout<<endl<<"Average : "<<n1.biggest();
    return 0;
}
