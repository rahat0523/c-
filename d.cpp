#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long int n,x,i,j=1;
 cin>>n>>x;
 vector<long long int> v(n);
 for( i=0;i<n;i++)
 cin>>v[i];
 vector<long long int> a(v);
 long long int b,c,flag=0;
 for(i=0;i<n;i++)
 {
   cout<<i<<" "<<j<<" ";
    if(((v[i]+a[j])==x))
    {
      flag=1;
       b=j;
       c=i;
    }
    else
    {
    if(i==(n-1))
    j++;
    }
 }
 /*if(flag==0)
 cout<<"IMPOSSIBLE\n";
 else
 cout<<b+1<<" "<<c+1<<"\n";*/
}