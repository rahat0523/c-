#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
   ios_base::sync_with_stdio (0);
   cin.tie (0);
   cout.tie (0);
   /*vector<pair<int,int>>v;     //for integer 
   for(int i=0;i<4;i++)
   {
    int a,b;
    cin>>a>>b;
    v.emplace_back(a,b);
   }*/
   vector<pair<int,string>>v;
   for(int i=0;i<4;i++)
   {
    int a;
    string s;
    cin>>a>>s;
    v.emplace_back(a,s);
   }
   //swap(v[0].first,v[3].first);
   for(auto& i:v)
   cout<<i.first<<" "<<i.second<<endl;
}