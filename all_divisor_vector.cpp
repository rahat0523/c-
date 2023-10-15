#include<bits/stdc++.h>
using namespace std;
void display(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    cout<<" "<<v[i];
    cout<<endl;
}
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++){
         vector<int> v;
        int n;
        cin>>n;
        for(int j=1;j<=sqrt(n);j++){
        if(n%j==0)
        {
          if(n/j==j)
          v.push_back(j);
          else{
          v.push_back(j);
          v.push_back(n/j);
          }
        }
        }
    sort(v.begin(),v.end());
    cout<<"Case "<< i<<":";   
    display(v);
    }
}