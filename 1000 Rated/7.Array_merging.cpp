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
 
void fillingMap(vector<ll>& a, unordered_map<ll,ll>& m ,ll n){
    ll intervalSize1 = 1 ; 
    ll prev = a[0] ;  
    for(ll i=1 ; i<n ; i++){
        if(a[i]==prev){
            intervalSize1++ ;
        }
        else{
            m[prev] = max(m[prev],intervalSize1) ; 
            intervalSize1 = 1 ; 
            prev = a[i] ;  
        }
    }
    m[prev] = max(m[prev],intervalSize1) ; 
}
void solve(){
    ll n ; cin>>n ; 
    vll a(n) ; repl(i,n) cin>>a[i] ; 
    vll b(n) ; repl(i,n) cin>>b[i] ; 
    //Code
    unordered_map<ll,ll> m1 , m2 ; 
    fillingMap(a,m1,n) ; 
    fillingMap(b,m2,n) ; 
    ll ans = 0 ; 
    for(auto p : m1){
        ans = max(ans,m1[p.first]+m2[p.first]) ; 
    }
    for(auto p : m2){
        ans = max(ans,m2[p.first]+m1[p.first]) ; 
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