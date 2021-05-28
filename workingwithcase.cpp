
#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    char oper;
    cin>>n1;
    cin>>oper;
    cin>>n2;
    switch(oper){
        case '+':
        cout<<n1+n2<<endl;
        break;
         case '-':
        cout<<n1-n2<<endl;
        break;
         case '*':
        cout<<n1*n2<<endl;
        break;
         case '/':
        cout<<n1/n2<<endl;
        break;
    }

    return 0;
}
