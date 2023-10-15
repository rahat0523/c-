#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
int main()
{
 int n;
 cin>>n;
 vector<int>v(n);
 for(int i=0;i<n;i++)
 cin>>v[i];
 vector<int>a;
 a.push_back(0);
 for(int i=0;i<n;i++)
 {
    a.push_back(a[i]+v[i]);
 }   
 while(n--)
 {
    int b,c;
    cin>>b>>c;
    cout<<a[c]-a[b-1]<<endl;
 }
}