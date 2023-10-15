#include<bits/stdc++.h>
using namespace std;
int fact(int num)
{
    int f=1;
    for(int i=2;i<=num;i++)
    f*=i;
    return f;
}
int main()
{
    int i,j,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n-1-i;j++)
          cout<<" ";
        for(j=0;j<=i;j++)
        {
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
}