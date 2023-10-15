#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
        printf("Case %d: yes\n",i);
        else
       printf("Case %d: no\n",i);

    }
}