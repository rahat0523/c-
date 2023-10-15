#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
int main()
{
     vector<vector<int>>v
     {
            {1 ,3, 4},
            {4, 5, 6},
            {7, 8, 9}
        };
     
     /*for(int i=0;i<v.size();i++)
     {
        for(int j=0;j<v.size();j++)
        cout<<v[i][j]<<" ";
        cout<<endl;

     }*/
     for( vector<int>v1:v)
     {
        for(int  i:v1)
        cout<<i<<" ";
        cout<<"\n";
     }
}