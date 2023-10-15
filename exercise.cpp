#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
int main()
{
   deque<int>v;
   int t;
   cin>>t;
   while(t--)
   {
    getchar();
    string s;
    cin>>s;
    if(s=="tofront")
    {
        int n;
        cin>>n;
        v.push_front(n);
    }
    else if(s=="front")
    {
        if(v.size()==0)
        cout<<"no job for ada\n";
        else
        {
        cout<<v.front()<<"\n";
        v.pop_front();
        }
    }
    else if(s=="back")
    {
        if(v.size()==0)
        cout<<"no job for ada\n";
        else
        {
        cout<<v.back()<<"\n";
        v.pop_back();
        }
    }
    else if(s=="reverse")
    {
    //reverse(v.begin(),v.end());
    
    }
    else if(s=="pushback")
    {
        int n;
        cin>>n;
        v.push_back(n);
    }
   }   
}
