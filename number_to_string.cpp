#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0;
    string s;
    cin>>n;
    while(n)
    {
        int r=n%10;
        n=n/10;
        s[i++]=r+'0';
    }
    for(int j=i-1;j>=0;j--)
    printf("%c",s[j]);
}