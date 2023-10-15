#include<bits/stdc++.h>
using namespace std;
int main()
{  
    long long int k;
    cin>>k;
    long long int f=1,l=100000000000000000;
    while(f<=l)
    {
       long long int  mid=(f+l)/2;
       if(mid>1000000000)
       {
       mid=1000000000;
       }
       long long int r=mid*mid;
        if(r==k)
        {
            cout<<mid<<endl;
            break;
        }
         else if(r>k)
        {
            l=mid-1;
        }
        else
        f=mid+1;
    }
    }


