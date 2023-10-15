#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,r,t,i,odd;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a;
        r=a;
        if(a%2!=0)
        {
            printf("Case %lld: Impossible\n",i);
            continue;
        }
       // odd=a/2;
        while(a%2==0)
        {
            a=a/2;
        }
        printf("Case %lld: %lld %lld\n",i,a,r/a);

    }
}