#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=1,b=0,x,y=2;
   while(y<=n)
   {
     x=(y-1)*(b+a);
      y++;
    a=b;
    b=x;
   }
   cout<<x<<endl;
}