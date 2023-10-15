#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
   ios_base::sync_with_stdio (0);
   cin.tie (0);
   cout.tie (0);
   string s;
   cin>>s;
   rotate(s.begin(),s.begin()+2,s.begin()+3);
   cout<<s<<endl;
   char c=*min_element(s.begin(),s.end());
   cout<<c<<endl;
}