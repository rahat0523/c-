#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,b;
    getline(cin,s);
    getline(cin,b);
   // reverse(s.begin(),s.end());
   // cout<<s<<endl;
    //reverse(s.begin()+4,s.end()-(s.size()-10));//don't reverse last two
    reverse(s.begin()+4,s.begin()+9);
    cout<<s<<endl;
    //sort(b.begin(),b.end());
    //cout<<b<<endl;
    sort(b.begin()+4,b.end()-(b.size()-10));//don't sort first 2
    cout<<b<<endl;
}