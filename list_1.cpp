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
   cout<<li.back()<<endl;
   cout<<li.front()<<endl;
   li.pop_back();
   li.pop_front();
   cout<<li.size()<<endl;
   //li.clear();
   if(li.empty())
   cout<<"Empty\n";
   else
   cout<<"not empty\n";
   for(auto i:li)
   cout<<i<<" ";
   cout<<endl;
}