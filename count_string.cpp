#include<bits/stdc++.h>
#define print(x) cout<<#x<<"="<<x<<"\n";
using namespace std;
int main()
{
        string s;

        getline(cin,s);
        sort(s.begin(),s.end());
        for(int i=0;i<s.length();i++)
        {
            int cnt=0;
        for(int j=0;j<s.length();j++)
        {
            if(j<i&&s[i]==s[j])
            break;
            if(s[i]==s[j])
            cnt++;
        }
        if(cnt!=0)
        cout<<s[i]<<"="<<cnt<<endl;
        }
}    