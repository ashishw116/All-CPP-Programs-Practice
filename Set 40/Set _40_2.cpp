//Write a program which takes number of millimeter and converts them into meters, feet, inches, centimeter and then millimeter.
#include<iostream>
using namespace std;
int main()
{
    int mm;
    cout<<"Enter millimeters"<<endl;
    cin>>mm;
    int m=mm/1000;
    int rem=mm%1000;
    int feet=rem/304;
    rem=rem%304;
    int inch=rem/25;
    rem=rem%25;
    int cm=rem/10;
    rem=rem%10;
    cout << "Meters      : " << m << endl;
    cout << "Feets       : " << feet << endl;
    cout << "Inches      : " << inch << endl;
    cout << "Centimeter  : " << cm << endl;
    cout << "Millimeter  : " << rem << endl;
    return 0;
}
