#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    
    long long int x,l,r,a,b,c;
    cin>>x>>l>>r;
    if(2<=(l-r)<=100)
    {
    int flag=0;
    for(int i=l;i<=r;i++)
    {
        for(int j=i+1;j<=r;j++)
        {
            if(x%(i*j)==0&&l<=i&&i<j&&j<x/(i*j)&&x/(i*j)<=r)
            {
               a=i;
               b=j;
               c=x/(i*j);
               if(a<b&&b<c&&a*b*c==x)
               {
                flag=1;
                break;
               }
               else
               continue;

            }
        }

    }
    if(flag==0)
    cout<<"-1\n";
    else
    cout<<a<<" "<<b<<" "<<c<<"\n";
    }
    else
     cout<<"-1\n";
    }
   
}