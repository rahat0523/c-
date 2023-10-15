#include<bits/stdc++.h>
using namespace std;
#define print(x) cout<<#x<<" = "<<x<<"\n";
int main()
{
    string s,b;
    int r=0,i=0,l=0;
    getchar();
    getline(cin,s);
    getchar();
    getline(cin,b);
    while(s[i]!='\0')
    i++;
    while(b[l]!='\0')
    l++;
    int flag=0;
    for(int j=0;j<i;j++)
    {
        if(s[j]!=b[j])
        {
        flag=1;
        break;
        }
    }
    if(flag==0&&i>l)
    printf("is 1\n");
    else if(flag==0&&i<l)
    printf("is -1\n");
    else if(flag==0&&i==l){
    printf("is 0\n");
    }
   if(flag==1)
    for(int j=0;j<i;j++)
        {
            if(s[j]>b[j])
            {r=1;}
            else if(s[j]<b[j])
            r=-1;

        }

        if(r==1)
        {
        printf("is 1\n");}
        else if(r==-1){
        printf("is -1\n");
        }
}