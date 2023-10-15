#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>a;
    a[5]=100;
    a.insert({1,10});
    a.insert({2,20}); 
    a.insert({3,30});
    a.insert({4,40});
    cout<<a[1]<<"\n";
    a[1]+=100;
    cout<<a.at(1)<<"\n";
    for(auto i:a)
    cout<<i.first<<" "<<i.second<<"\n " ;
   /*map<int,int>::iterator i;
   for( i=a.begin();i!=a.end();i++ )
   cout<<i->first<<" "<<i->second<<"\n";*/
   cout<<a.size()<<"\n";
   cout<<a.max_size()<<"\n";
   a.clear();
   if(a.empty())cout<<"empty\n";
   else cout<<"Not empty\n";
}