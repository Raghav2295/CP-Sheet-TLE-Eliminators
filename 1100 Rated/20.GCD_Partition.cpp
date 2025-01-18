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
 
ll gcd(ll a, ll b){
    if(a%b==0) return b ; 
    return gcd(b,a%b) ; 
}

void solve(){
    ll n ; cin>>n ; 
    vll v(n) ; repl(i,n) cin>>v[i] ; 
    //Code
    //Always taking k=2 and trying brute force 
    vll prefix(n) ; 
    prefix[0] = v[0] ; 
    for(ll i=1 ; i<n ; i++){
        prefix[i] = v[i]+prefix[i-1] ; 
    }
    ll ans = 1 ; 
    for(ll i=0 ; i<n-1 ; i++){
        ll sum1 = prefix[i] ;
        ll sum2 = prefix[n-1]-prefix[i] ; 
        ans = max(ans,gcd(sum1,sum2)) ; 
    }
    cout<<ans<<nl ; 
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}