#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
 cin >> T;
for (int i = 1; i <= T; i++) {
        unsigned long long P, L;
        cin >> P >> L;
cout << "Case " << i << ":";
    vector<unsigned long long> possibleIntegers;

    unsigned long long remainingPiajus = P - L;

    if (remainingPiajus == 0 || L >= P) 
        cout << " impossible" << std::endl;
        else
        {
             for (unsigned long long i = 1; i * i <= remainingPiajus; i++) {
        if (remainingPiajus % i == 0) {
            unsigned long long num1 = i;
            unsigned long long num2 = remainingPiajus / i;

            if (num1 > L) {
                possibleIntegers.push_back(num1);
            }

            if (num2 != num1 && num2 > L) {
                possibleIntegers.push_back(num2);
            }
        }
    }
     sort(possibleIntegers.begin(), possibleIntegers.end());
    for (unsigned long long num : possibleIntegers) {
        cout << " " << num;
    }
    cout << endl;
        }
}
}