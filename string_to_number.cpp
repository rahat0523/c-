#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s=0,i=0;
    string a;
    getline(cin,a);
    while(a[i]!='\0'){
        i++;
    }
   for(int j=0;j<i;j++)
    {
        if(a[j]>='0'&&a[j]<='9')
        {
            s=s*10+a[j]-'0';
        }
    }
    printf("%d",s);
}