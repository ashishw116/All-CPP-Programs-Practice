//Write a program to find the Middle element of an array elements of type int and float by creating a function template which contains both template type and non-template type parameters.
#include<iostream>
using namespace std;
template <class T,int size> T biggestEle(T (&a)[size])
{
    int mid=size/2;;
    return a[mid];
}
int main()
{
    int arr1[] = {5, 9, 2, 7, 3};
    float arr2[] = {4.5, 9.8, 1.2, 7.7, 3.3};

    cout << "Mid Integer: " << biggestEle(arr1) << endl;
    cout << "Mid Float: " << biggestEle(arr2) << endl;
    return 0;
}
