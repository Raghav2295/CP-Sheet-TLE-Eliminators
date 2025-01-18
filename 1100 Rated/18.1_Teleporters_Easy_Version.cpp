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
    ll n, c;
    cin >> n >> c;
    vll v(n); 
    priority_queue<ll,vector<ll>,greater<ll> > pq ; 
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
        pq.push(v[i]+i+1) ; 
    }
    ll ans = 0 ; 
    while(pq.size() && c>0){
        ll t = pq.top() ; 
        pq.pop() ; 
        if(c>=t) ans++ ; 
        else break ; 
        c-=t ; 
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