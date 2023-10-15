#include<bits/stdc++.h>
using namespace std;
void display(vector<int>r)
{
    for(int i=0;i<r.size();i++)
    cout<<r[i]<<" ";
    cout<<"\n";
}
int main()
{
    vector<int>r;
    r.push_back(1);
    r.push_back(2);
    r.push_back(3);
    r.push_back(4);
    display(r);
    r.pop_back();
    display(r);
    r.push_back(9);
    r.push_back(132);
    sort(r.begin(),r.end());
    display(r);
   // r.clear();
    //cout<<r.size();
   // if(r.empty())cout<<"empty\n";
    //else cout<<"not empty\n";
    //int first_element=r.front();
    //int last_element=r.back();
   // cout<<first_element<<last_element;
   r.erase(r.begin()+2);
   display(r);
    r.insert(r.begin()+2,2,3);
   display(r);
   reverse(r.begin(),r.end());
   display(r);
   vector<int>r2={7,8,9};
   r.swap(r2);
   display(r);
}