#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int x=a[0],max=a[0];
    for(int i=0;i<n;i++)
{
    if(a[i]>max)
    max=a[i];
}
int s=0;
   for(int i=0;i<n;i++)
{
    if(a[i]==max)
    s++;
}
if(max==x&&s==1)
printf("0\n");
else if(max==x&&s>1)
printf("1\n");
else
printf("%d\n",max-x+1);
}