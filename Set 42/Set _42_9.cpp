//Write a program to delete an element in the array using one function in the class (Pass the array as argument from main function and print it, no need to return the array).
#include<iostream>
using namespace std;
class ArrayOp
{
public:
    void deleteElement(int arr[],int ind)
    {
        int del_element=arr[ind-1];
        for(int i=ind-1;i<5-1;i++)
        {
            arr[i]=arr[i+1];
        }
        cout<<"Deleted Element : "<<del_element<<endl;
        arr[5-1]=0;
    }

};
int main()
{
    ArrayOp de;
    int arr[]={10,20,30,40,50};
    de.deleteElement(arr,3);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
