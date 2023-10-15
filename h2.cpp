#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[7],s=0;
    for(int i=0;i<6;i++)
    {
    cin>>a[i];
    s+=a[i];
    }
    int flag=0;
    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            for(int k=j+1;k<6;k++)
            {
                if((a[i]+a[j]+a[k])==(s-(a[i]+a[j]+a[k])))
                flag=1;
            }
        }
    }
    if(flag==1)
    cout<<"YES\n";
    else
    cout<<"NO\n";
}