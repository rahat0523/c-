#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int>s;   //multiset can print and store the duplicate values

    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(5) ;
    for(auto i:s)
    cout<<i<<" ";
    cout<<"\n";
   /* s.erase(2);      //erase all same same numbers
    for(auto i:s)
    cout<<i<<" ";
    cout<<"\n";*/
    s.erase(s.find(2));     // erase only one element although they are same
    for(auto i:s)
    cout<<i<<" ";
    cout<<"\n";
}
