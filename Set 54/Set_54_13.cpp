//Write a program to define a function template to swap the contents of the two data items of type int,float and double.
#include<iostream>
using namespace std;
template <class T> void swapValues(T &a,T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    int i1 = 50, i2 = 20;
    float f1 = 7.5f, f2 = 4.9f;
    double d1 = 12.34, d2 = 67.90;

    cout << "--- Before Swapping ---" << endl;
    cout << "Integers: " << i1 << ", " << i2 << endl;
    cout << "Floats: " << f1 << ", " << f2 << endl;
    cout << "Doubles: " << d1 << ", " << d2 << endl;

    swapValues(i1, i2);
    swapValues(f1, f2);
    swapValues(d1, d2);

    cout << "\n--- After Swapping ---" << endl;
    cout << "Integers: " << i1 << ", " << i2 << endl;
    cout << "Floats: " << f1 << ", " << f2 << endl;
    cout << "Doubles: " << d1 << ", " << d2 << endl;
}
