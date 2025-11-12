//Write a program to inherit Three classes called Student into a class called Customer. Student class will take data like Regno, Name and percentage and show in a function called operation(). Whereas same named function will be there in Customer class to take input as Account number and balance to display the same
#include<iostream>
using namespace std;
class Student
{
public:
    int regNo;
    string name;
    float percentage;
    virtual void operation()
    {
        cout << "Enter Student Details:\n";
        cout << "Registration Number: ";
        cin >> regNo;
        cout << "Name: ";
        cin >> name;
        cout << "Percentage: ";
        cin >> percentage;

        cout << "\n--- Student Details ---\n";
        cout << "Registration No: " << regNo << endl;
        cout << "Name: " << name << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};
class Customer : public Student
{
public:
    long long accountNumber;
    float balance;
    void operation()
    {
        cout << "\nEnter Customer Details:\n";
        cout << "Account Number: ";
        cin >> accountNumber;
        cout << "Balance: ";
        cin >> balance;

        cout << "\n--- Customer Details ---\n";
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};
int main()
{
    Student *ptr;
    Customer c;
    ptr=&c;
    ptr->operation();

    Student s;
    ptr=&s;
    ptr->operation();
    return 0;
}
