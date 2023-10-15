#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0,p=0,temp=0;
    scanf("%d ",&n);
  char s[n];
  scanf("%s",s);
  
  for(int i=0;i<n;i++)
  {
     if(s[i]=='I'){
        if(temp<p)
        temp=p;
     p++;
     }
     if(s[i]=='D'){
     if(temp<p)
     temp=p;
     p--;
     }
  }
  if(temp>x)
  cout<<temp<<endl;
  else
  cout<<x<<endl;
}