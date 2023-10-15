#include<bits/stdc++.h>
using namespace std;
#define print(x) cout<<#x<<" = "<<x<<"\n";
int main()
{
    string a="rahat",b="rahat";
    //print(a.compare(b));
    int x=a.compare(b);
    if(x==1)
        cout<<"a is grater than b"<<'\n';
    else if(x==-1)
        cout<<"b is grater than a"<<'\n';
    else
        cout<<"a is equal b"<<'\n';
return 0;
}