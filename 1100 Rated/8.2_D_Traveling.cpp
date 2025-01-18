#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

#define ll long long
#define repl(i, n) for (ll i = 0; i < n; i++)
#define nl endl

void solve() {
    ll n, k, a, b;
    cin >> n >> k >> a >> b;
    
    vector< vector<ll> > v(n, vector<ll>(2)); 
    repl(i, n) repl(j, 2) cin >> v[i][j];
    
    ll start_x = v[a-1][0], start_y = v[a-1][1];
    ll end_x = v[b-1][0], end_y = v[b-1][1];
    
    // pair<ll, ll> nearestFromStart = make_pair(LLONG_MAX, LLONG_MAX);
    // pair<ll, ll> nearestFromEnd = make_pair(LLONG_MAX, LLONG_MAX);
    
    ll minStart = LLONG_MAX / 2, minEnd = LLONG_MAX / 2;
    
    repl(i, k) {
        ll diffStart = abs(v[i][0] - start_x) + abs(v[i][1] - start_y);
        if (diffStart < minStart) {
            minStart = diffStart;
            // nearestFromStart = make_pair(v[i][0], v[i][1]);
        }
        
        ll diffEnd = abs(v[i][0] - end_x) + abs(v[i][1] - end_y);
        if (diffEnd < minEnd) {
            minEnd = diffEnd;
            // nearestFromEnd = make_pair(v[i][0], v[i][1]) ;
        }
    }
    
    ll directDistance = abs(start_x - end_x) + abs(start_y - end_y);
    ll viaNearestPoints = minStart + minEnd;
    
    cout << min(directDistance, viaNearestPoints) << nl;
}

int main() {
    fastIO();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
