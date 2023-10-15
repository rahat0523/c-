#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
   ios_base::sync_with_stdio (0);
   cin.tie (0);
   cout.tie (0);
   list<ll>li={1,2,3,4,5,6,3,3,3,3,2,2,2,4};
   list<ll>li1={7,75,2,525,5};
   li.unique();
   li1.unique();
   li.merge(li1);
   for(auto i:li)
   cout<<i<<" ";
   cout<<endl;
   cout<<li1.size()<<endl;
}