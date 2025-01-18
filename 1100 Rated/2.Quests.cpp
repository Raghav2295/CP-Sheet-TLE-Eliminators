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
    ll n , k ; cin>>n>>k ; 
    vll a(n) ; repl(i,n) cin>>a[i] ; 
    vll b(n) ; repl(i,n) cin>>b[i] ; 
    //Code
    vll maxSecondTime(n) ; 
    maxSecondTime[0] = b[0] ; 
    for(ll i=1 ; i<n ; i++){
        maxSecondTime[i] = max(maxSecondTime[i-1],b[i]) ; 
    }
    ll maxAns = 0 ; 
    ll key = 0 ; 
    ll cnt = 0 ; 
    for(ll i=0 ; i<n && cnt!=k ; i++){
        key += a[i] ; 
        cnt++ ; 
        maxAns = max(maxAns,key+(k-cnt)*maxSecondTime[i]) ; 
    }
    cout<<maxAns<<nl ; 
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}