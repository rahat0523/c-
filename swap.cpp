#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp,mp1;
     mp.insert({1,10});
     mp.insert({2,20});
     mp.insert({4,30});
     mp.insert({5,40});
     mp1[6]=60;
     mp1[7]=70;
     mp1[8]=80;
     mp.swap(mp1);
    for(auto i:mp1)
    cout<<(i).first<<" "<<( i).second<<"\n";
}