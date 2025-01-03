#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

#define ll long long
#define rep(i,n) for(int i=0; i<n; i++)
#define nl endl

void solve(){
    ll w, h;
    cin >> w >> h;
    ll maxArea = LLONG_MIN;

    for (int i = 0; i < 4; i++) {
        ll k;
        cin >> k;
        vector<ll> coordinates(k);
        rep(j, k) cin >> coordinates[j];
        if (k > 0) {
            ll diff = coordinates[k-1] - coordinates[0];
            ll area = (i < 2) ? diff * h : diff * w; 
            maxArea = max(maxArea, area);
        }
    }
    cout << maxArea << nl; 
}

int main(){
    fastIO();
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}
