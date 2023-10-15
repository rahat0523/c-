#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;
int main()
{ 
vector<int>v={1,11,1,2,3,3,4};
map<int,int>count;
for(auto i:v)
count[i]++;
sort(count.begin(),count.end());
for(auto i:count)
cout<<i.first<<" "<<i.second<<"\n";
   //for(auto [num,cnt]:count)
   //cout<<num<<" "<<cnt<<"\n";

}

