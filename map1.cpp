 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
   /*key sortec 
    key can be anything
    key canbe deleted

   */
  /*map<int,string>mp;
  mp[10]="rahat";
  map<string ,int>mp;
  mp["rahat"]=10;*/

    map<int,int>mp;
     mp.insert({1,10});
     mp.insert({2,10});
     mp.insert({3,30});
     mp.insert({4,40});
     //mp.erase(1);
    for(auto i:mp)
    cout<<i.first<<" "<<i.second<<"\n";
    int count=mp.count(1);
    cout<<count<<"\n";
    mp.erase(2);
    auto it=mp.find(2);
    if(it!=mp.end()) cout<<"f\n";
    else cout<<"nf\n";
    
 }