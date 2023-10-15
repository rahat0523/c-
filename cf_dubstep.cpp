#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    //s.erase('WUB',s.end());
    //s.erase("WUB");
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            s.erase(i,i+3);
        }
    }
    cout<<s<<endl;
}