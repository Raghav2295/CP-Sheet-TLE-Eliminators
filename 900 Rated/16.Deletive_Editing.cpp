#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve() {
    string s, t;
    cin >> s >> t;

    // Frequency map for `t`
    unordered_map<char, int> freqT;
    for (char c : t) {
        freqT[c]++;
    }

    // Filter `s` to only include characters present in `t`
    string str = "";
    for (char c : s) {
        if (freqT.find(c) != freqT.end()) {
            str += c;
        }
    }

    // Frequency map for `str`
    unordered_map<char, int> freqStr;
    for (char c : str) {
        freqStr[c]++;
    }

    // Check if `str` can be transformed to `t`                    
    for (auto it : freqT) {
        char ch = it.first;
        int required = it.second;

        if (freqStr[ch] < required) {
            cout << "NO" << endl;
            return;
        }
        freqStr[ch] -= required;
    }

    // Construct the final string from `str` by filtering excess characters
    string finalS = "";
    for (char c : str) {
        if (freqStr[c] > 0) {
            freqStr[c]--;
        } else {
            finalS += c;
        }
    }

    // Compare with `t`
    if (finalS == t) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    fastIO();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
