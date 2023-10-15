#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s=0,a;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            s+=a;
        }
        if(s%2==0)
        printf("YES\n");
        else
        printf("NO\n");

    }
}
