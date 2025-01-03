#include <iostream>
#include <vector> 
#include <algorithm>
#include <string>
#include <queue>
#include<map>
#include<unordered_map>
#include<set>
#include <stack>
#include<deque>
#include<climits>
#include<numeric>
using namespace std; 

void fastIO(){
    ios_base::sync_with_stdio(false) ; 
    cin.tie(NULL) ; 
}

#define ll long long 
#define all(v) v.begin(),v.end() 
#define rep(i,n) for(int i=0 ; i<n ; i++)
#define repl(i,n) for(ll i=0 ; i<n ; i++)
#define vi vector<int> 
#define vc vector<char> 
#define vll vector<long long> 
#define sp " "
#define nl endl 
 
void solve() {
    ll n;
    cin >> n;
    vi v(n);
    rep(i, n) cin >> v[i];

    // Count frequency of each element
    unordered_map<ll, ll> freq;
    for (ll i = 0; i < n; i++) freq[v[i]]++;

    // Check if any element has frequency 1 (impossible to form a group)
    unordered_map<ll,ll> :: iterator it = freq.begin() ; 
    for (it = freq.begin() ; it!=freq.end() ; it++) {
        if (it->second == 1) {
            cout << -1 << nl;
            return;
        }
    }

    // Generate the result permutation
    vi ans(n);
    vi positions;
    for (ll i = 0; i < n; i++) positions.push_back(i);

    // Rearrange indices group-wise
    ll idx = 0;
    while (idx < n) {
        ll start = idx;
        ll end = idx;

        // Find group length
        while (end < n && v[end] == v[start]) end++;

        // If the group has at least 2 elements, shift positions
        for (ll i = start; i < end; i++) {
            ans[i] = i == end - 1 ? start : i + 1;
        }
        idx = end;
    }

    // Output the result
    for (ll i = 0; i < n; i++) cout << ans[i] + 1 << sp;
    cout << nl;
}


int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}