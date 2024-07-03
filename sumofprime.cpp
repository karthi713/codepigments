#include<iostream>
#include<string>
using namespace std;
int main()t:
{
int n,i,j,flag=0,i1,j1;
cout<<"enter the no\n";
cin>>n;
for(i=2;i<n;i++)
{
for(j=2;j<i;j++)
{
flag=0;
if(i+j==n)
{
for(i1=2, j1=2;i1<i/2,j1<j/2;i1++,j1++)
{
if(i%i1==0||j%j1==0)
{
flag=1;
break;
}
}
if(flag==0)
cout<<i<<'+'<<j<<'='<<n<<endl;
}
}
}
if(flag==1)
cout<<"cannot express interms of prime num\n";
return 0;
}


