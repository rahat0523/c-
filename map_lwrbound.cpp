 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    map<int,int>mp;
     mp.insert({1,10});
     mp.insert({2,20});
     mp.insert({4,30});
     mp.insert({5,40});
     mp.erase(1);
    //auto i=mp.lower_bound(1);
    auto i=mp.lower_bound(3);
    cout<<(*i).first<<" "<<(*i).second<<"\n";
    
    
 }