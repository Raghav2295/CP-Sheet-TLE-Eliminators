#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <stack>
using namespace std;

#define ll long long
#define all(v) v.begin(),v.end()
#define rep(i,n) for(int i=0 ; i<n ; i++)

void solve() {
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    int times = 0;
    string temp = x;
    // Double `x` until its length is greater than or equal to `m`
    while ((int)x.size() < m) {
        x += temp;
        temp = x ; 
        times++;
    }
    if (x.find(s) != string::npos) {
        cout << times << endl;
        return ; 
    }
    // Double one more time to ensure `x` is long enough
    x += temp;
    times++;
    
    // Try to find `s` in `x`
    if (x.find(s) != string::npos) {
        cout << times << endl;
    } else {
        cout << -1 << endl;
    }
}
                
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
