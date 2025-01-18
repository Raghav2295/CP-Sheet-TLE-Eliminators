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
 
bool solve() {
    ll n, k;
    cin >> n >> k;

    vector< vector<int> > v(n, vector<int>(n));
    rep(i, n) rep(j, n) cin >> v[i][j];
    if(n==1) return true ; 
    ll mismatches = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (v[i][j] != v[n - i - 1][n - j - 1]) {
                mismatches++;
            }
        }
    }
    // cout<<mismatches<<nl ; 
    mismatches /= 2; 
    if (mismatches > k) {
        return false;
    }
    if(n%2==1){
        return true ;
    }
    else if ((k - mismatches) % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        bool flag = solve() ;
        if(flag) cout<<"YES"<<nl ; 
        else cout<<"NO"<<nl ; 
    }
}