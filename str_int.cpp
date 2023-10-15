#include<bits/stdc++.h>
using namespace std;
#define print(x) cout<<#x<<" = "<<x<<"\n";
int main()
{
    //print('a'-'0');
    string s;
    getline(cin,s);
    int a;
    //cin>>a;
    print(stoi(s));
    print(stol(s));//string number to long
    print(stoll(s));//string to long long
    print(stof(s));//string to float
    print(stod(s));//string to double
    print(to_string(a));//number to string
}