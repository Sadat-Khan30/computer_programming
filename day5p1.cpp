#include <bits/stdc++.h>

using namespace std;

int mysumfunc(int,int);
void linedivider();

int main()
{
    int n1,n2, result;
    cout<< "Please input two integers: "<<endl;
    cin>>n1;
    linedivider();
    cin>>n2;
    result = mysumfunc(n1,n2);
    cout<<"Result: "<<result<<endl;
    return 0;
}
int mysumfunc(int n1,int n2){
    return n1+n2;
}
void linedivider(){
    cout<<"----------------------------------"<<endl;
}
