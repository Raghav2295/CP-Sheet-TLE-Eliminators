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
 
void solve(){
    ll n ; cin>>n ; 
    vll v(n) ; repl(i,n) cin>>v[i] ; 
    //Code
    vll prefix(n+1) ;
    prefix[0] = 1 ;
    vector<ll> factors ; 
    for(ll i=1 ; i<n+1 ;i++){
        if(n%i==0) factors.push_back(i) ; 
        prefix[i] = prefix[i-1]+v[i-1] ; 
    }
    ll m = factors.size() ; 
    ll maxDiff = LLONG_MIN ; 
    for(ll i=0 ; i<m ; i++){
        ll k = factors[i] ; 
        ll mn = LLONG_MAX ; 
        ll mx = LLONG_MIN ; 
        for(ll j=k ; j<=n ; j+=k){
            ll x = prefix[j] - prefix[j-k] ; 
            mn = min(mn,x) ; 
            mx = max(mx,x) ; 
        }
        maxDiff = max(maxDiff,mx-mn) ; 
    }
    cout<<maxDiff<<nl ; 

}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}