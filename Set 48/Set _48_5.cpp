//Write a program to declare an array of size 5 as the data member of a class and class should have member functions like push(), pop( ), display( ) to perform all the operations of Queue.
#include<iostream>
using namespace std;

class Queue
{
    const int sizeQ = 5;
    int que[sizeQ];
    int rearp;
    int frontp;

public:
    Queue()
    {
        rearp = -1;
        frontp = -1;
    }

    bool isFull()
    {
        return rearp == sizeQ - 1;
    }

    bool isEmpty()
    {
        return frontp == -1 || frontp > rearp;
    }

    void push(int ele)
    {
        if (isFull())
        {
            cout << "Queue is full\n";
            return;
        }
        if (isEmpty())
        {
            frontp = 0;
        }
        rearp++;
        que[rearp] = ele;
        cout << "Inserted: " << ele << endl;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Removed: " << que[frontp] << endl;
        frontp++;
        if (frontp > rearp)
        {
            frontp = rearp = -1;
        }
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue Elements: ";
        for (int i = frontp; i <= rearp; i++)
        {
            cout << que[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Queue q;
    int choice, ele;

    do
    {
        cout << "\n---- Queue Menu ----\n";
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
                q.push(ele);
                break;
            case 2:
                q.pop();
                break;
            case 3:
                q.display();
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while(true);
}
