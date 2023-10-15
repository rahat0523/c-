#include<bits/stdc++.h>
#define print(x) cout<<#x<<"="<<x<<"\n";
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int  l=s.length();
    for(int i=1;i<=l;i++)
    {
        for(int j=0;j<l+1-i;j++)
        {
            string temp=s.substr(j,i);
            print(temp);
        }
    }
}