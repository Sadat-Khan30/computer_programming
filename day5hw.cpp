#include <iostream>

using namespace std;

int main()
{
    int a = 1;
    while (a==1)
    {
        cout<<endl<<"Click 1 for Addition"<<endl;
        cout<<"Click 2 for Subtraction"<<endl;
        cout<<"Click 3 for Multiplication"<<endl;
        cout<<"Click 4 for Division"<<endl;
        int x,y;
        int choice;
        cin>>choice;
        if(choice==1)
        {
            cout<<"Which two numbers do you want to add?"<<endl<<endl;
            cout<<"Enter your first number"<<endl;
            cin>>x;
            cout<<"So "<<x<<" is you first number"<<endl;
            cout<<"What is your second number?"<<endl;
            cin>>y;
            cout<<"The sum is "<<x+y<<endl;
        }
        if(choice==2)
        {
            cout<<"Which two numbers do you want to subtract?"<<endl<<endl;
            cout<<"Enter your first number"<<endl;
            cin>>x;
            cout<<"So "<<x<<" is you first number"<<endl;
            cout<<"What is your second number?"<<endl;
            cin>>y;
            cout<<"The difference is "<<x-y<<endl;
        }
        if(choice==3)
        {
            cout<<"Which two numbers do you want to multiply?"<<endl<<endl;
            cout<<"Enter your first number"<<endl;
            cin>>x;
            cout<<"So "<<x<<" is you first number"<<endl;
            cout<<"What is your second number?"<<endl;
            cin>>y;
            cout<<"The product is "<<x*y<<endl;
        }
        if(choice==4)
        {
            cout<<"Which two numbers do you want to divide?"<<endl<<endl;
            cout<<"Enter your first number"<<endl;
            cin>>x;
            cout<<"So "<<x<<" is you first number"<<endl;
            cout<<"What is your second number?"<<endl;
            cin>>y;
            cout<<"The quotient is "<<x/y<<endl;
        }
        a==2;
    }
    cout<<"To quit: press 0\n To continue press 1"<<endl;
    int z;
    cin>>z;
    if(z==1)
    {
        a==1;
    }
    else if (z==0)
    {
        cout<<"Program ended"<<endl;
    }

    return 0;
}
