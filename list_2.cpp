#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
   ios_base::sync_with_stdio (0);
   cin.tie (0);
   cout.tie (0);
    list<ll>li;
   li.push_back(4);
   li.push_back(5);
   li.push_back(6);
   li.push_back(7);
   li.push_back(8);
   li.push_front(1);
   li.push_front(2);
   li.insert(li.begin(),9);
   li.insert(li.end(),11);
   list<ll>::iterator it,it1;
   it=li.begin();
   it1=li.begin();
   advance(it,3);
   li.insert(it,22);
   //li.erase(li.begin());
   li.erase(it1,it);
   //li.erase(it);
   for(auto i:li)
   cout<<i<<" ";
   cout<<endl;
}