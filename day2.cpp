#include <iostream>

using namespace std;
void line(), message();//prototypes
int main()
{
    cout<<"Hello! The program starts in main().\n";
    line();
    message();
    line();
    cout<<"At the end of main().\n";

    return 0;
}
void line()
//to draw a line
{
    cout<<"_________________________\n";
}
void message()
//to display a message
{
    cout<<"In a function message().\n";
}

