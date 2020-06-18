#include<iostream>
using namespace std;

void printPatt(int n)
{
int i,j;
for(i=n;i>=0;i--)
{
for(j=1;j<=i;j++)
{
cout<<"*";
}
cout<<endl;
}
}
int main()
{
int x;
printPatt( x);
cout<<"Enter number of row\n";
cin>>x;
return 0;
}


