#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
int main()
{
    stack<string>st;
    map<string,int>mp;
    int t;
    cin>>t;
    while(t--)
    {
        getchar();
        string s;
        cin>>s;
        st.push(s);
    }
    cout<<endl;
    while(st.size()>0)
    {
        if(mp[st.top()]==0)
        cout<<st.top()<<endl;
        mp[st.top()]++;
        st.pop();
    }
}