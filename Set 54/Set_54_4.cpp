//WAP to print student information using hierarchical inheritance having class Student, Grade, Attendance and Percentage. Class Student is the super class which is having two private data members i.e; name, roll no. and set these values using private member functions. Inherit student class by class Grade, class Percentage and class Attendance which are having respective private data members and member functions to load the data. Print the values along with the super class data members in each of the classes in a public member function called displayData( )
#include<iostream>
using namespace std;
class Student
{
private:
    int rollNo;
    string name;
    void loadRollNo(int roll)
    {
        this->rollNo=roll;
    }
    void loadName(string name)
    {
        this->name=name;
    }
public:
    void setRollNo(int roll)
    {
        loadRollNo(roll);
    }
    void setName(string name)
    {
        loadName(name);
    }
    int getRollNo()
    {
        return rollNo;
    }
    string getName()
    {
        return name;
    }

};
class Grade : public Student
{
private:
    string grade;
    void loadGrade(string grade)
    {
        this->grade=grade;
    }
public:
    void setGrade(string grade)
    {
        loadGrade(grade);
    }
    string getGrade()
    {
        return grade;
    }
    void displayData()
    {
        cout<<endl<<"-----Student Info-----";
        cout<<endl<<"Name : "<<getName();
        cout<<endl<<"Roll No : "<<getRollNo();
        cout<<endl<<"Grade : "<<getGrade();
    }
};
class Percentage : public Student
{
private:
    float per;
    void loadPer(float per)
    {
        this->per=per;
    }
public:
    void setPer(float per)
    {
        loadPer(per);
    }
    float getPer()
    {
        return per;
    }
    void displayData()
    {
        cout<<endl<<"-----Student Info-----";
        cout<<endl<<"Name : "<<getName();
        cout<<endl<<"Roll No : "<<getRollNo();
        cout<<endl<<"Percentage : "<<getPer();
    }
};
class Attendance : public Student
{
private:
    float attendance;
    void loadAttendance(float attendance)
    {
        this->attendance=attendance;
    }
public:
    void setAttendance(float attendance)
    {
        loadAttendance(attendance);
    }
    float getAttendance()
    {
        return attendance;
    }
    void displayData()
    {
        cout<<endl<<"-----Student Info-----";
        cout<<endl<<"Name : "<<getName();
        cout<<endl<<"Roll No : "<<getRollNo();
        cout<<endl<<"Attendance : "<<getAttendance();
    }
};
int main()
{
    string name,grade;
    int roll;
    float per,attendance;
    cout<<"Enter Student Info "<<endl;
    cout<<"Name : "<<endl;
    cin>>name;
    cout<<"Roll No : "<<endl;
    cin>>roll;
    cout<<"Grade : "<<endl;
    cin>>grade;
    cout<<"Percentage : "<<endl;
    cin>>per;
    cout<<"Attendance : "<<endl;
    cin>>attendance;

    Grade g;
    g.setRollNo(roll);
    g.setName(name);
    g.setGrade(grade);
    g.displayData();

    Percentage p;
    p.setRollNo(roll);
    p.setName(name);
    p.setPer(per);
    p.displayData();

    Attendance a;
    a.setRollNo(roll);
    a.setName(name);
    a.setAttendance(attendance);
    a.displayData();

    return 0;
}
