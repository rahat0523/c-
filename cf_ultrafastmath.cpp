#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]==s2[i])
        cout<<"0";
        else
        cout<<"1";
    }
    cout<<endl;
}