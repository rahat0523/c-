#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1){
    long long int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    //int k;
    //cin>>k;
    int f=0,l=n;
    //for(int i=1;i<=k;i++)
    {
        int r;
        cin>>r;
    while(f<=l)
    {
       int  mid=(f+l)/2;
        if(a[mid]==r)
        {
            cout<<"YES"<<endl;
            break;
        }
         if(a[mid]>k)
        {
            l=mid-1;
        }
        else
        f=mid+1;
    }
    }
    }

}