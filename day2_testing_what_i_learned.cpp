#include <iostream>
void x(), y();
using namespace std;
int main(){
    cout<<"hello"<<endl;
    x();
    y();
    return 0;
}
void x(){
    cout<<"nice to meet you\n";
}
void y(){
    cout<<"goodbye\n";
}
