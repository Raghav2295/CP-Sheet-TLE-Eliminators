#include <iostream>
#include <vector>
#include <unordered_set>
#include <utility>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

#define nl '\n'

// Custom hash function for pair<int, int>
struct PairHash {
    size_t operator()(const pair<int, int>& p) const {
        return hash<int>()(p.first) ^ (hash<int>()(p.second) << 1);
    }
};

void solve() {
    int a, b;
    cin >> a >> b;
    int xa, ya;
    cin >> xa >> ya;
    int xb, yb;
    cin >> xb >> yb;

    using Point = pair<int, int>;
    unordered_set<Point, PairHash> seta, setb;

    // Directions for knight moves
    vector<Point> directions = {
        {a, b}, {a, -b}, {-a, b}, {-a, -b},
        {b, a}, {b, -a}, {-b, a}, {-b, -a}
    };

    // Populate seta
    for (const auto& d : directions) {
        seta.emplace(xa + d.first, ya + d.second);
    }

    // Populate setb
    for (const auto& d : directions) {
        setb.emplace(xb + d.first, yb + d.second);
    }

    // Count common points
    int ans = 0;
    for (const auto& p : seta) {
        if (setb.count(p)) {
            ans++;
        }
    }

    cout << ans << nl;
}

int main() {
    fastIO();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
