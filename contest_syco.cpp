#include<bits/stdc++.h>
using namespace std;
int v[101],n,k,x,i,t;
int main()
{
	cin>>n;
	t=1;k=0;
	while(n--)
	{
		cin>>x;
		if(x<0)
			k++;
		if(k>=3)
			v[++t]++,k=1;
		else
			v[t]++;
	}
	cout<<t<<endl;
	for(i=1;i<=t;++i)
		cout<<v[i]<<" ";
	
}