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
void display(vll& v){
    ll n = v.size() ; 
    repl(i,n) cout<<v[i]<<sp;
    cout<<nl ;
}
 
void solve(){
    ll n ; cin>>n ; 
    vll v(n) ; repl(i,n) cin>>v[i] ; 
    //Code
    vll a = v ; 
    sort(all(a)) ; 
    vll ans(n) , prefix(n,a[0]) ; 
    for(ll i=1 ; i<n ; i++){
        prefix[i] = a[i]+prefix[i-1] ; 
    }
    for(ll i=n-1 ; i>=0 ; i--){
        if(i==n-1){
            ans[i] = i ; 
            continue; 
        }
        ans[i] = i ; 
        if(prefix[i]>=a[i+1]){
            ans[i] = ans[i+1] ; 
        }
    }
    map<ll,ll> m ;
    for(ll i=0 ; i<n ; i++){
        m[a[i]] = ans[i] ;  
    }
    for(ll i=0 ; i<n ; i++){
        cout<<m[v[i]]<<sp ; 
    }
    cout<<nl ; 
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}