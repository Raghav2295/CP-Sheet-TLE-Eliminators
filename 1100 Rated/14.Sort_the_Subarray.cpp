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
    vll a(n) ; repl(i,n) cin>>a[i] ; 
    vll b(n) ; repl(i,n) cin>>b[i] ; 
    //Code
    ll idx_start = -1 ;
    ll idx_end = -1 ; 
    for(ll i=0 ; i<n ; i++){
        if(a[i]!=b[i]){
            idx_start = i ; 
            break ; 
        }
    }
    for(ll i=n-1 ; i>=0 ; i--){
        if(a[i]!=b[i]){
            idx_end = i ; 
            break ; 
        }
    }
    while(idx_start>=1 && a[idx_start-1]<=b[idx_start]) idx_start-- ; 
    while(idx_end<=n-2 && a[idx_end+1]>=b[idx_end]) idx_end++ ; 
    cout<<idx_start+1<<sp<<idx_end+1<<nl ; 
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}