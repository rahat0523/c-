#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int t,w;
   cin>>t;
   while(t--)
   {
    cin>>w;
    int a[w];
    for(int i=0;i<w;i++)
    cin>>a[i];
    int max=a[0];
    for(int i=0;i<w;i++)
    {
       if(a[i]>max)
       max=a[i];
    }
    int n=max;
    for(int i=0;i<w;i++)
    {
        cout<<max<<endl;
        if(a[i]<=max)
        {
        max--;
        }
        else 
        {
        n++;
        max++;
        }
    }
  //  cout<<n<<endl;
   }
}