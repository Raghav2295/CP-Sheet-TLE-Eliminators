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
 
void solve(){
    ll n , k ; cin>>n>>k ; 
    vll v(n) ; repl(i,n) cin>>v[i] ;  
    //Code
    repl(i,n){
        v[i] = v[i]%k ; 
        if(v[i]==0) v[i] = k ; 
    }
    priority_queue< pair<ll,ll> > pq ; 
    repl(i,n){
        pq.push(make_pair(v[i],n-i)) ; 
    }
    vector<ll> ans ; 
    while(pq.size()){
        pair<ll,ll> p = pq.top() ; 
        ll f = p.first , s = p.second ; 
        ans.push_back(n-s+1) ; 
        pq.pop() ; 
    }
    ll m = ans.size() ; 
    repl(i,m) cout<<ans[i]<<sp ; 
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