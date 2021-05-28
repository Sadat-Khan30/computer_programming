
#include <iostream>

using namespace std;

int main()
{
    int x, y, n;
    cout<<"Starting point: "<<endl;
    cin>>x;
    cout<<"Ending point: "<<endl;
    cin>>y;
    cout<<"Enter number"<<endl;
    cin>>n;
    for(int i=x; i<=y; i++){
        cout<<n*i<<endl;
    }


    return 0;
}

