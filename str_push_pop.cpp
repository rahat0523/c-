#include<bits/stdc++.h>
using namespace std;
#define print(x) cout<<#x<<" = "<<x<<"\n";
int main()
{
    string a="abcd";
    a.push_back('e');
    print(a);
    string b="abc";
    b.pop_back();
   // b.pop_back();
   // b.pop_back();

    print(b);
    b.append("asd");//to push a string at last at a string
    print(b);
return 0;
}