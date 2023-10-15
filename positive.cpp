#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a,b,i,l;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        //b=b*2*b;
        printf("Case %lld: %lld\n",i,b*b*2);
    }
}