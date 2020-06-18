#include<iostream>
using namespace std;

int main()
{
int n,i,j,p;
cout<<" Enter the value of n\n=";
cin>>n;
for(i=n;i>0;i--) 
{
for(j=1;j<=i;j++)
 
cout<<"*";
cout<<"\n";

for(p=j-1;p<=n;p++)
cout<<" ";

}
return 0;
}
