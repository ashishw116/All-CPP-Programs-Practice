//Write a program to sort+ the student information in descending order based on Percentage of 5 given students for the data members like name, roll no and percentage by using the array as objects ( Create classes like Student , Sort)
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
class Sort
{
public:
    void sortInDescending(Student s[])
    {
        for(int i=0;i<4;i++)
        {
            for(int j=i+1;j<5;j++)
            {
                if(s[i].percentage<s[j].percentage)
                {
                    Student temp=s[i];
                    s[i]=s[j];
                    s[j]=temp;
                }
            }
        }
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
    Sort so;
    cout<<"Before sort in descending : \n";
    for(int i=0;i<5;i++)
    {
        s[i].display();
    }
    so.sortInDescending(s);
    cout<<"After sort in descending : \n";
    for(int i=0;i<5;i++)
    {
        s[i].display();
    }
    return 0;
}

