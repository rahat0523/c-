#include<bits/stdc++.h>
using namespace std;
int main()
{ 
vector<int>a={1,2,3,4,5};
//vector<int>::iterator i;
a.erase(a.begin()+1,a.end()-2);
//for(i=a.begin();i!=a.end();i++)
//cout<<i<<"\n";
//for(int i=0;i<a.size();i++)
for(int i:a)//for each loop
cout<<a[i]<<"\n";
//for(char i:a)
//cout<<cout<<a[i]<<"\n";

   
}