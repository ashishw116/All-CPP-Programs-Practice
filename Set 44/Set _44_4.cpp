//Write a program to find the biggest percentage among given 5 student’s information like name, Roll no and Percentage by using array as objects ( Create classes like Student, Biggest)
#include<iostream>
#include<cmath>
using namespace std;
class Student
{
public:
    int roll_no;
    string name;
    float percentage;
    void setData()
    {
        cin>>roll_no>>name>>percentage;
    }
    void display()
    {
        cout<<"Roll no : "<<roll_no<<" Name : "<<name<<" Percentage : "<<percentage<<endl;
    }
};
class Topper
{
public:
    Student getTopper(Student s[])
    {
        Student topper=s[0];
        for(int i=1;i<5;i++)
        {
            if(topper.percentage<s[i].percentage)
                topper=s[i];
        }
        return topper;
    }
};
int main()
{
    Student s[5];
    cout<<"Enter the Roll no, name, percentage of 5 student : \n";
    for(int i=0;i<5;i++)
    {
        cout<<"Enter Roll no, Name, Percentage Of student "<<i+1<<endl;
        s[i].setData();
    }
    Topper t;
    Student topper=t.getTopper(s);
    cout<<"Topper : \n";
    topper.display();
    return 0;
}

