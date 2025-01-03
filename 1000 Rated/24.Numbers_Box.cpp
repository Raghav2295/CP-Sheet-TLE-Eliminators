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
    ll n , m ; cin>>n>>m ; 
    // vector< vector<ll> > v(n,vector<ll>(m)) ; 
    ll noOfminus = 0 ; 
    ll sum = 0 ; 
    ll mn = INT_MAX ; 
    repl(i,n) repl(j,m){
        ll x ; cin>>x ;     
        if(x<0) noOfminus++ ;
        sum+=abs(x); 
        mn = min(mn,abs(x)) ; 
    } 
    if(noOfminus%2==0) cout<<sum<<nl ; 
    else cout<<sum-2*mn<<nl ; 

}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}