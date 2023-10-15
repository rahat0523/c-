#include<bits/stdc++.h>
using namespace std;
int main()
{
    //set<int>s;
   /* s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(2);
    for(auto i:s)
    cout<<i<<" ";
    cout<<"\n";*/

    //this print the in reverse order..

   // for(auto i=s.rbegin();i!=s.rend();i++)
   // cout<<*i<<" ";
   vector<int>v;
   v.push_back(1);
   v.push_back(2);
   v.push_back(3);
   v.push_back(4);
   set<int>st(v.begin(),v.end());
   set<int,greater<int>>s;
   s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(2);
    s.erase(2);
    for(auto i:s)
    cout<<i<<" ";

}