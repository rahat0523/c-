#include<bits/stdc++.h>
using namespace std;
void display(vector<int> v)
{
  for(int i=0;i<v.size();i++)
  cout<<v[i]<<" ";
  cout<<endl;
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    display(v);
   vector<int>::iterator it;
   for(it=v.begin();it!=v.end();it++)
   cout<<*it<<" ";
   cout<<endl;
   for(auto element:v)
    cout<<element<<" ";
    cout<<endl;
    v.pop_back();
    display(v);
    vector<int>v1(5,9);
    display(v1);
   swap(v,v1);
   display(v);
   display(v1);
   vector<int>v2;
   int n;
   for(int i=0;i<5;i++){
    cin>>n;
    v2.push_back(n);
   }
 sort(v2.begin(),v2.end());
  display(v2);
}