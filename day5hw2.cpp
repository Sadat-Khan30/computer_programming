
#include <iostream>

using namespace std;

int main()
{
    int t, i;
    cin>>t;
    for(i=1; i<=t; i++){
        int n1, n2, n3;
        cin>>n1>>n2>>n3;
        if(n1>n2){
            if(n1>n3){
                cout<<n1<<" is the greatest"<<endl;
            if(n2>n3){
                cout<<n2<<" is second greatest\n"<<n3<<" is smallest."<<endl;
            }
            else{
                cout<<n3<<" is second greatest\n"<<n2<<" is smallest"<<endl;
            }}
        }
        else if(n2>n1){
            if(n2>n3){
                cout<<n2<<" is the greatest."<<endl;
                if(n1>n3){
                    cout<<n1<<" is second greatest\n"<<n3<<" is the smallest"<<endl;
                }
            else{
                cout<<n3<<" is second greatest\n"<<n1<<" is the smallest"<<endl;
            }
            }
        }
        else if(n3>n1){
            if(n3>n2){
                cout<<n3<<" is the greatest"<<endl;
                if(n1>n2){
                    cout<<n1<<" is second greatest\n"<<n2<<" is the smallest"<<endl;
                }
            else{
                cout<<n2<<" is second greatest\n"<<n1<<" is the smallest"<<endl;
            }
            }
        }
    }

    return 0;
}
