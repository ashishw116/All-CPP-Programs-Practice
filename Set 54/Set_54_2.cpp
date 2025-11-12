//WAP to reverse an array using multi-level inheritance having class One, Two, Three, Four and Five with their private data member and private member functions to load the data for data member and create a function called formArray() in class Five to create array. Create another class called Reverse with one member function getReverse() to get the reverse of the array and print the result in class Five.
#include<iostream>
using namespace std;
class Reverse
{
public:
    void getRreverse(int* arr)
    {
        for(int i=0,j=4;i<j;i++,j--)
        {
            swap(arr[i],arr[j]);
        }
    }
};
class One
{
private:
    int x;
    void loadX(int x)
    {
        this->x=x;
    }
public:
    virtual void setX(int x)
    {
        loadX(x);
    }
    int oneX()
    {
        return x;
    }
};
class Two : public One
{
private:
    int x;
    void loadX(int x)
    {
        this->x=x;
    }
public:
    void setX(int x)
    {
        loadX(x);
    }
    int twoX()
    {
        return x;
    }
};
class Three : public Two
{
private:
    int x;
    void loadX(int x)
    {
        this->x=x;
    }
public:
    void setX(int x)
    {
        loadX(x);
    }
    int threeX()
    {
        return x;
    }
};
class Four : public Three
{
private:
    int x;
    void loadX(int x)
    {
        this->x=x;
    }
public:
    void setX(int x)
    {
        loadX(x);
    }
    int fourX()
    {
        return x;
    }
};
class Five : public Four
{
private:
    int x;
    void loadX(int x)
    {
        this->x=x;
    }
public:
    void setX(int x)
    {
        loadX(x);
    }
    int fiveX()
    {
        return x;
    }
    void formArray()
    {
        int a=oneX(),b=twoX(),c=threeX(),d=fourX(),e=fiveX();
        int arr[]={a,b,c,d,e};
        cout<<"Array : ";
        for(int i : arr)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        Reverse rev;
        rev.getRreverse(arr);
        cout<<"Reverse Array : ";
        for(int i : arr)
        {
            cout<<i<<" ";

        }
        cout<<endl;
    }
};
int main()
{
    One *ptr;
    One o;
    ptr=&o;
    ptr->setX(5);
    Two t;
    ptr=&t;
    ptr->setX(10);
    Three th;
    ptr=&th;
    ptr->setX(15);
    Four f;
    ptr=&f;
    ptr->setX(20);
    Five fi;
    ptr=&fi;
    ptr->setX(25);
    fi.formArray();
    return 0;
}
