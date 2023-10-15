#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,b;
    getline(cin,s);
    getline(cin,b);
   // reverse(s.begin(),s.end());
   // cout<<s<<endl;
    reverse(s.begin(),s.end()-2);//don't reverse last two
    cout<<s<<endl;
    //sort(b.begin(),b.end());
    //cout<<b<<endl;
    sort(b.begin()+2,b.end());//don't sort first 2
    cout<<b<<endl;
}