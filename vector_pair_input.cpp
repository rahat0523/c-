#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
   ios_base::sync_with_stdio (0);
   cin.tie (0);
   cout.tie (0);
   vector<pair<int,int>>v(4);
   int a,b;
   for(auto &i:v)
   {
   cin>>a;
   i.first=a;
   }
   for(auto &i:v)
   {
   cin>>a;
   i.second=a;
   }
   for(auto &i:v)
   {
   cout<<i.first<<" "<<i.second<<endl;
   }
}