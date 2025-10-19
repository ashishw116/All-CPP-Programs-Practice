//Write a program to merge array one after another and as consecutively using two different methods in a class (Pass the array as argument from main function and print it, no need to return the array).
#include<iostream>
using namespace std;
class ArrayOp
{
public:
    void deleteElement(int arr1[],int size1,int arr2[],int size2)
    {
        int size3=size1+size2;
        int newArry[size3];
        int idx3=0;
        for(int i=0;i<size3;i++)
        {
            if(i<size1)
                newArry[i]=arr1[i];
            else
                newArry[i]=arr2[idx3++];
        }
        for(int i=0;i<size3;i++)
            cout<<newArry[i]<<" ";
    }
};
int main()
{
    ArrayOp de;
    int arr1[]={10,20,30,40,50};
    int arr2[]={60,70,80};
    int size1=sizeof(arr1)/sizeof(int);
    int size2=sizeof(arr2)/sizeof(int);
    de.deleteElement(arr1,size1,arr2,size2);
    return 0;
}
