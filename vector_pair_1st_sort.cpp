#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
   ios_base::sync_with_stdio (0);
   cin.tie (0);
   cout.tie (0);
   vector<pair<ll,ll>>v={{1,2},{5,6},{3,4},{7,9}};
   sort(v.begin(),v.end());
   for(auto& i:v)
   cout<<i.first<<" "<<i.second<<endl;
}