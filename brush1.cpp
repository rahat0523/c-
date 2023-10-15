#include<stdio.h>
int main()
{
    int t,i,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int n,s=0;
        scanf("%d",&n);
        int a[n];
        for(j=0;j<n;j++){
        scanf("%d",&a[j]);
       
        }
        for(int j=0;j<n;j++)
        {
            if(a[j]>0)
         s+=a[j];

        }
        printf("Case %d: %d\n",i,s);
    }
}