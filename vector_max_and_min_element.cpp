#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
   ios_base::sync_with_stdio (0);
   cin.tie (0);
   cout.tie (0);
   vector<ll>v={1,2,3,4,5};
   cout<<*max_element(v.begin(),v.end())<<endl;
   cout<<*min_element(v.begin(),v.end())<<endl;  
}