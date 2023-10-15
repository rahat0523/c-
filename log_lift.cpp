#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int a,b;
        cin>>a>>b;
        int sum=19+abs(a-b)*4+a*4;
        printf("Case %d: %d\n",i,sum);
    }
}