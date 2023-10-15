#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,t,a1,a2;
    int count=0;
    cin>>t;
    while(t--)
    {
        count++;
        cin>>n;
        a1=(2 * acos (0.0))*n*n;
        a2=(2*n)*(2*n);
        printf("Case %d: %.2lf\n",count,(a2-a1+.000000001));
    }
}