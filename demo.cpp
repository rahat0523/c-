#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, x = 0, ans = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'I') {
            x++;
            ans = max(ans, x);
        }
    else {
            x--;
        }
    }
    cout << ans << endl;
    return 0;
}
