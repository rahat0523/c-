#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, int> freq;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        freq[num]++;
    }

    int maxCount = 0;
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        int x = it->first;
        int count = it->second;

        maxCount = max(maxCount, count + freq[x + 1] + freq[x - 1]);
    }

    cout << maxCount << endl;

    return 0;
}
