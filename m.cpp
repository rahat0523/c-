#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    int t;
    cin>>t;
    while(t--)
    {
        int l,r,x;
        cin>>l>>r>>x;
        int count=0;
    sort(a.begin()+l-1,a.end());
    //for(int i=0;i<)
        for(int i=l-1;i<=r-1;i++)
        {
            if(a[i]==x)
            count++;
            else if(a[i]>x)
            break;
        }
        cout<<count<<"\n";
    }
}