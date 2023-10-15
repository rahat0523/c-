#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
   ios_base::sync_with_stdio (0);
   cin.tie (0);
   cout.tie (0);
   int N;
   cin>>N;
   vector<int>v[N];
   for(int i=0;i<N;i++)
   {
    //ll n;
    //cin>>n;
    for(int j=0;j<N;j++)
    {
        int x;
        cin>>x;
        v[i].push_back(x);
    }
   }
   for(auto i:v)
   {
    for(auto j:i)
    cout<<j<<" ";
    cout<<endl;
   }
}