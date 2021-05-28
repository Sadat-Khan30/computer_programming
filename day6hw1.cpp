
#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout<<"Starting point: ";
    cin>>x;
    cout<<endl<<"Ending point: ";
    cin>>y;
    cout<<endl;
    for(int i=x; i<=y; i++){
        if(i%2==1){
            cout<<"The odd numbers are: \n";
            cout<<i<<endl;
        }
        if(i%2==0){
            cout<<"the even numbers are: "<<endl;
            cout<<i<<endl;
        }
    }


    return 0;
}
