#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
   ios_base::sync_with_stdio (0);
   cin.tie (0);
   cout.tie (0);
   vector<int>v={1,2,3,4,5,6,8};
   ll sum=accumulate(v.begin(),v.end(),0);
   cout<<sum<<endl;  
}