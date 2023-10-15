#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10],i,j,temp,n;
    cin>>n;
    for(i=0;i<n;i++)
     cin>>a[i];
     for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
     }
      for(i=0;i<n;i++)
      cout<<a[i]<<" ";
}