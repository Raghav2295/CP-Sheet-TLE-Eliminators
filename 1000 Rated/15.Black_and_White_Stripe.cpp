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
    ll n, k; 
    cin >> n >> k; 
    string str; 
    cin >> str;
    ll currentCost = 0;
    for (ll i = 0; i < k; i++) {
        if (str[i] == 'W') currentCost++;
    }

    ll minCost = currentCost;

    // Sliding window logic
    for (ll i = k; i < n; i++) {
        if (str[i - k] == 'W') currentCost--;
        if (str[i] == 'W') currentCost++;
        minCost = min(minCost, currentCost);
    }

    cout << minCost << nl;
}


int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}