//Write a program to inherit a class called RevereArray by a class called ReverseArrayElements. In Base class create a member function called reverse() to reverse the array elements, Whereas in subclass create a member function called reverse() to reverse each elements of the array using virtual functions.
#include<iostream>
using namespace std;
class RevereArray
{
public:
    virtual void reverseArr(int arr[],int n)
    {
        for(int i=0,j=n-1;i<j;i++,j--)
        {
            swap(arr[i],arr[j]);
        }
    }
};
class ReverseArrayElements : public RevereArray
{
public:
    void reverseArr(int arr[],int n)
    {
        for(int i=0;i<n;i++)
        {

            int temp=arr[i];
            int rev=0;
            while(temp>0)
            {
                int rem=temp%10;
                rev=rev*10+rem;
                temp/=10;
            }
            arr[i]=rev;
        }
    }
};
int main()
{
    RevereArray *ptr;
    RevereArray revArr;
    int n=5;
    int arr[n]={4,54,6,356,43};
    cout<<endl<<"Array Elements \n";
    for(int ele : arr)
    {
        cout<<ele<<" ";
    }
    ReverseArrayElements revArrEle;
    cout<<endl<<"Array Elements \n";
    ptr=&revArr;
    ptr->reverseArr(arr,n);
    cout<<endl<<"Reverse Array \n";
    for(int ele : arr)
    {
        cout<<ele<<" ";
    }
    ptr=&revArrEle;
    ptr->reverseArr(arr,n);
    cout<<endl<<"Reverse Array Elements \n";
    for(int ele : arr)
    {
        cout<<ele<<" ";
    }
    return 0;
}
