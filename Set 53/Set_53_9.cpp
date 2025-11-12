//Write a program to Inherit 5 classes Like RupeetoDollor, RupeetoYen, RupeetoPound, RupeetoEuro, RupeetoRubel, RupeetoDinar in multi-level manner in a class called Conversion. Each of the class is having a member function called doConversion() to perform respective actions using virtual functions.
#include<iostream>
using namespace std;
class RupeetoDollor
{
public:
    virtual void doConversion(int rup)
    {
        cout<<"Rupee To Dollor :"<<(double)rup*0.01128;
    }
};
class RupeetoYen : public RupeetoDollor
{
public:
    void doConversion(int rup)
    {
        cout<<"Rupee To Yen :"<<(double)rup*1.746;
    }
};
class RupeetoPound : public RupeetoYen
{
public:
    void  doConversion(int rup)
    {
        cout<<"Rupee To Pound :"<<(double)rup*0.00857;
    }
};
class RupeetoEuro : public RupeetoPound
{
public:
    void doConversion(int rup)
    {
        cout<<"Rupee To Euro :"<<(double)rup*0.00983;
    }
};
class RupeetoRubel : public RupeetoEuro
{
public:
    void  doConversion(int rup)
    {
        cout<<"Rupee To Rubel :"<<(double)rup*0.9118;
    }
};
class RupeetoDinar : public RupeetoRubel
{
public:
    void  doConversion(int rup)
    {
        cout<<"Rupee To Dinar :"<<(double)rup*0.00346;
    }
};
class Conversion : public RupeetoDinar
{
public:
    void doConversion(int rup)
    {
        while(true)
        {
            cout << "\n--- Addition of Different Types ---\n";
            cout << "1. Rupee to Dollor\n";
            cout << "2. Rupee to Yen\n";
            cout << "3. Rupee to Pound\n";
            cout << "4. Rupee to Euro\n";
            cout << "5. Rupee to Rubel\n";
            cout << "6. Rupee to Dinar\n";
            cout << "7. Exit";
            int choice;
            cout << "\nEnter your choice: ";
            cin >> choice;
            switch (choice)
            {
            case 1:
                RupeetoDollor::doConversion(rup);
                break;
            case 2:
                RupeetoYen::doConversion(rup);
                break;
            case 3:
                RupeetoPound::doConversion(rup);
                break;
            case 4:
                RupeetoEuro::doConversion(rup);
                break;
            case 5:
                RupeetoRubel::doConversion(rup);
                break;
            case 6:
                RupeetoDinar::doConversion(rup);
                break;
            case 7:
                exit(0);
            default:
                cout << "Invalid choice!\n";
            }
        }
    }
};
int main()
{
    RupeetoDollor *ptr;
    Conversion c;
    ptr=&c;
    int rup;
    cout<<"\nEnter Rupees : "<<endl;
    cin>>rup;
    ptr->doConversion(rup);
    return 0;
}
