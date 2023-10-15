#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
   ios_base::sync_with_stdio (0);
   cin.tie (0);
   cout.tie (0);
   pair<int,string>p;
   //p=make_pair(1,"rahat");
    p={1,"rahat"};
    pair<int,string>p1=p;
    p1.first=2;
   //cout<<p1.first<<" "<<p1.second<<endl;
    //pair<int,string> &p1=p;              // & reference print, can be change
    //p1.first=2;
   cout<<p1.first<<" "<<p1.second<<endl;
}