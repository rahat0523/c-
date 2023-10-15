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
   vector<vector<int>>v;
   for(int i=0;i<N;i++)
   {
    //int n;
    //cin>>n;
    vector<int>temp;
    for(int j=0;j<N;j++)
    {
        int x;
        cin>>x;
        temp.push_back(x);
    }
    v.push_back(temp);
   }
   for(auto& i:v)
   {
    for(auto &j:i)
    cout<<j<<" ";
    cout<<endl;
   }
}