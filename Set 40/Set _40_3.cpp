//Write a program to find the number of characters in a string.
#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter A String\n";
    getline(cin,s);
    int len=s.length();
    cout<<"Length of string : "<<len;
    return 0;
}
