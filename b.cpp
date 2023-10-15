#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    int count2,count1=0;
    cin>>n;
    for(int i=n;i<=n+100;i++)
    {
        if(i%100==99)
        {
            a=i;
            break;
        }
    }
    if(n<100)
    printf("99\n");
   
     else if(a-n<50)
    printf("%d\n",a);
    else if(a-50==n)
    {
    printf("%d\n",a);
    }
    else
    printf("%d\n",a-100);
   
}