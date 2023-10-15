#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a,b,i,j;
 cin>>a>>b;
 for(i=a;i<=b;i++)
 {
   for(j=2;j<=sqrt(i);j++)
   {
   if(i%j==0)
   {
   cout<<i<< " is not a prime number"<<endl;
   break;
   }
   }
   if(j>sqrt(i))
   cout<<i<<" is a prime number"<<endl;
   
 }
return 0;
}