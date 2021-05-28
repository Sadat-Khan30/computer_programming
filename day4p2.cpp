
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
 int n1 = 70, n2 = 102;
 char A1 = 'A', A2 = 'b';
 cout<<n1<<endl<<n2<<endl<<A1<<endl<<A2<<endl;
 cout<<"_____________________________________\n";
 printf("%d %c\n", n1, n1);
 printf("%d %c %c\n", A1, A1, 65+5);
 printf("%d %c %c\n", A2, A2, 98+4);
 printf("%d %c\n", n2, n2);
 printf("%d %d %d\n", ' ', '#', '$');
 cout<<"_____________________________________\n";
 bool result = true, result1 =1, result0=0, resultfalse=false;
 cout<<result<<endl<<result1<<endl<<resultfalse<<endl<<result0<<endl;
 cout<<"_____________________________________\n";
 float N1=1.4, N2=1.57;
 cout<<N1<<endl<<N2<<endl;
 cout<<"_____________________________________\n";
 double f1=1.4, f2=1.57;
 cout<<f1<<endl<<f2<<endl;
 return 0;
}
