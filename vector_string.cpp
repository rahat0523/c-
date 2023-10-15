#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
   ios_base::sync_with_stdio (0);
   cin.tie (0);
   cout.tie (0);
   vector<string>v;
   for(int i=0;i<4;i++)
   {
    string s;
    cin>>s;
    v.push_back(s);
   }  
   for(auto &i:v)
   cout<<i<<" ";
}