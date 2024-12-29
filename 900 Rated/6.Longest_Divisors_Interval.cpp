#include <iostream>
#include <cmath> 
using namespace std; 

void fastIO(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
}

#define ll long long 
#define nl endl 

void solve(){
    ll n; 
    cin >> n; 
    long long ans = -1; 
    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i != 0) { // Your original logic
            ans = i - 1; 
            break; 
        }
    }
    if (ans == -1) 
        cout << 1 << nl; 
    else 
        cout << ans << nl; 
}

int main(){
    fastIO(); 
    int t; 
    cin >> t; 
    while (t--) {
        solve();
    }
}
