
#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    char oper;
    cin>>n1;
    cin>>oper;
    cin>>n2;
    if(oper=='+'){
        cout<<n1+n2<<endl;
    }
    else if(oper=='-'){
        cout<<n1-n2<<endl;
    }
    else if(oper=='*'){
        cout<<n1*n2<<endl;
    }
    else if(oper=='/'){
        cout<<n1/n2<<endl;
    }

    return 0;
}
