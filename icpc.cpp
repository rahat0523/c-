#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
   ios_base::sync_with_stdio (0);
   cin.tie (0);
   cout.tie (0);
   ll t,sum=1;
   cin>>t;
   while(t--)
   {
    ll n,a,b,count=0;
    cin>>n>>a>>b;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
       cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           if(i!=j&&a<=(v[j]+v[i])&&b>=(v[j]+v[i]))
           {
            count++;
           }
        }
    }
    cout<<"Case "<<sum<<":"<<count/2<<endl;
    sum++;
   }

}