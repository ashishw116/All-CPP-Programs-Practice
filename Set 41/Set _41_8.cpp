//Write a program to convert the binary equivalent of a decimal number.
#include<iostream>
using namespace std;
int main()
{
    int n,binary[32],ind=0;
    cout<<"Enter the number :\n";
    cin>>n;
    while(n>0)
    {
        binary[ind++]=n%2;
        n/=2;
    }
    for(int i=ind-1;i>=0;i--)
    {
        cout<<binary[i];
    }
    return 0;
}
