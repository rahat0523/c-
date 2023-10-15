#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0,b;
    char s[1001];
    cin>>n>>b;
    while(n)
    {
        s[i++]=n%b;
        n=n/b;
    }
    for(int j=i-1;j>=0;j--)
    printf("%d",s[j]);
}