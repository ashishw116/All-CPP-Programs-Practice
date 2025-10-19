//Write a program to declare an array of size 5 as the data member of a class and class should have member functions like push(), pop( ), display( ) to perform all the operations of Stack.
#include<iostream>
using namespace std;

class Stack
{
    const int sizeQ = 5;
    int stackArr[sizeQ];
    int top;

public:
    Stack()
    {
        top=-1;
    }

    bool isFull()
    {
        return top == sizeQ - 1;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    void push(int ele)
    {
        if (isFull())
        {
            cout << "Stack is full\n";
            return;
        }
        top++;
        stackArr[top] = ele;
        cout << "Inserted: " << ele << endl;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Removed: " << stackArr[top] << endl;
        top--;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Stack Elements: ";
        for (int i = top; i >= 0; i--)
        {
            cout << stackArr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Stack s;
    int choice, ele;

    do
    {
        cout << "\n---- Stack Menu ----\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter element to insert: ";
                cin >> ele;
                s.push(ele);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.display();
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while(true);
}
