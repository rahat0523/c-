#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
int main()
{
    deque<int>dq;
    dq.push_back(1);
    dq.push_back(2); 
    dq.push_back(3); 
    dq.push_back(4);
    dq.push_front(5);
    dq.push_front(6);
    cout<<dq.front()<<"\n";
    cout<<dq.back()<<"\n";
    dq.pop_front();  
    dq.pop_back();
   // dq.clear();
    if(dq.empty())cout<<"empty\n";
    else cout<<"not empty\n";
    dq.erase(dq.begin()+2);
    dq.insrt(dq.begin()+2,16);
    for(auto i:dq)
    cout<<i<<" ";
}