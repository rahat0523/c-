#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tc;
	cin>>tc;
	while(tc--){
		long long n,m,i,jk;
		cin>>n>>m;
		int j,k=0;
		string s[n],ss="vika";
		for(i=0;i<n;i++)
			cin>>s[i];
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				if(s[j][i]==ss[k]){
					k++;break;
				}
			}
		}
		if(k==4)cout<<"YES\n";
		else cout<<"NO\n";
	}
}