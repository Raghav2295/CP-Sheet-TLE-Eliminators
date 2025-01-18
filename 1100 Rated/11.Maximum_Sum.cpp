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
void display(vi& v){
    int n = v.size() ; 
    rep(i,n) cout<<v[i]<<sp;
    cout<<nl ;
}
 
void solve() {
    ll n, k; 
    cin >> n >> k; 
    vll v(n); 
    repl(i, n) cin >> v[i]; 
    sort(all(v)); 
    vll prefix(n, 0); 
    prefix[0] = v[0]; 
    for (ll i = 1; i < n; i++) prefix[i] = prefix[i - 1] + v[i];
    ll maxSum = 0;
    for (ll i = 0; i <= k; i++) {
        ll smallSum = (i > 0) ? prefix[2 * i - 1] : 0; 
        ll largeSum = (k - i > 0) ? prefix[n - 1] - prefix[n - (k - i) - 1] : 0; 
        maxSum = max(maxSum, prefix[n - 1] - smallSum - largeSum);
    }
    cout << maxSum << nl;
}


int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}