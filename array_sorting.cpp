#include<bits/stdc++.h>
using namespace std;
void display(int a[])
{
    for(int i=0;i<5;i++)
    cout<<a[i]<<" ";
}
int main()
{
    int a[5],i;
    for(i=0;i<5;i++)
    cin>>a[i];
    cout<<"The array before sorting= ";
    display(a);
    cout<<endl;
    sort(a, a+5);
    cout<<"The array after sorting= ";
    display(a);
}