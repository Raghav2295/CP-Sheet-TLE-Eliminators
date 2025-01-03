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
    ll n ; cin>>n ; 
    vector< pair<ll,ll> > v(n) ; 
    repl(i,n){
        ll x ; cin>>x ; 
        v[i] = make_pair(x,i+1) ; 
    }
    //Code
    vector<ll> ans(n+1,0) ; 
    sort(v.begin(), v.end(), greater< pair<ll,ll> >());
    ll cnt = 1 ; 
    ll time = 0 ; 
    for(ll i=0 ; i<n ; i++){
        // cout<<v[i].second<<sp ; 
        ans[v[i].second] = cnt ;
        time+=v[i].first*(abs(cnt)) ; 
        cnt *= -1 ; 
        if(cnt>0) cnt++ ;  
    }
    cout<<2*time<<nl ;
    for(ll i=0 ; i<n+1 ; i++) cout<<ans[i]<<sp ; 
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