#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int x, int low, int high) {
  while (low <= high) {
    int mid =(high - low) / 2;

    if (a[mid] == x)
      return mid;

    if (a[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    while(1)
    {
    int x;
    cin>>x;
  int result = binarySearch(a, x, 0, n - 1);
  if (result == -1)
    cout<<"Not found\n";
  else
    cout<<"Element is found at index "<<result<<endl;
}
}