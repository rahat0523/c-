 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    map<int,string>mp;
    mp.insert({1,"abab"});
    mp.insert({2,"vaef"});
    mp.insert({3,"avfa"});
    mp.insert({4,"afsf"}); 
    cout<<mp[1]<<"\n";
    for(auto i:mp)
    cout<<i.first<<" "<<i.second<<"\n";
 }