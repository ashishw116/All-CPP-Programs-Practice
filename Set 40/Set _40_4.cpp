//Write a program to check the given string is empty or not.
#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string :\n";
    getline(cin,s);
    if(s.empty())
        cout<<"\nString is empty";
    else
        cout<<"\nEntered string is :"<<s;
    return 0;
}
