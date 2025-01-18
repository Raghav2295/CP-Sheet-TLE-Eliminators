#include <iostream>
#include <vector> 
#include <algorithm>
#include <string>
#include <queue>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<set>
#include <stack>
#include<deque>
#include<climits>
#include<numeric>
using namespace std;
 
#define ll long long 
#define all(v) v.begin(),v.end() 
#define rep(i,n) for(int i=0 ; i<n ; i++)
#define repl(i,n) for(ll i=0 ; i<n ; i++)
#define vi vector<int> 
#define vc vector<char> 
#define vll vector<long long> 
#define sp " "
#define nl endl 

ll gcd(ll a, ll b){ if (b == 0)return a ; return gcd(b, a % b);} 
void fastIO(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void display(vi& v){ int n = v.size() ; rep(i,n) cout<<v[i]<<sp;cout<<nl ;}
void displayll(vll& v){ll n=v.size();repl(i,n)cout<<v[i]<<sp;cout<<nl;}
 
void solve() {
    int n;
    cin >> n;
    vll v(n);
    rep(i, n) cin >> v[i];

    // Compute prefix and suffix sums
    vll prefix(n), suffix(n);
    prefix[0] = v[0];
    suffix[n - 1] = v[n - 1];

    for (int i = 1; i < n; i++) {
        prefix[i] = v[i] + prefix[i - 1];
        suffix[n - i - 1] = v[n - i - 1] + suffix[n - i];
    }
    ll ans = 0;
    for (int i = 0; i < n - 1; i++) {
        ll alice = prefix[i];
        if (suffix[i + 1] >= alice) {  
            int low = i + 1, high = n - 1, best = -1;
            while (low <= high) {
                int mid = (high + low) / 2;
                if (suffix[mid] == alice) {
                    best = mid;  // Record the index where it matches
                    break;       // Early exit as we found the answer
                } else if (suffix[mid] > alice) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
            if (best != -1) {
                ans = max(ans, (ll)(i + n - best+1)); 
            }
        }
    }

    cout << ans << nl;
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}