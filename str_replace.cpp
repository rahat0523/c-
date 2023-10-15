#include<bits/stdc++.h>
using namespace std;
#define print(x) cout<<#x<<" = "<<x<<"\n";
int main()
{
      string s=("Hello World");
    s.replace(6, 5,"Bangladesh");//6=position of the first letter. 5=lenght of remove part
    print(s);
    string s2=("Rahat Bin Hafiz");
    string s3=s2.substr(6,3);//6=substrin point 3=range 
    print(s3);
return 0;
}