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
#define vi vector<int> 
#define vc vector<char> 
#define vll vector<long long> 
#define sp " "
#define nl endl 
 
void solve(){
    ll n ; cin>>n ; 
    vector< vector<ll> > grid(n) ; 
    vector<ll> secondMinimums(n) ; 
    ll universalMn = INT_MAX ; 
    rep(i,n){
        ll m ; cin>>m ; 
        vector<ll> v(m) ; 
        rep(j,m){
            cin>>v[j] ; 
        }
        sort(all(v)) ; 
        secondMinimums[i] = v[1] ; 
        universalMn = min(universalMn,v[0]) ; 
        grid[i] = v ; 
    }
    //Code
    ll mn = INT_MAX , idx = -1; 
    rep(i,n){
        if(mn>secondMinimums[i]){
            mn=secondMinimums[i] ; 
            idx = i ; 
        }
    }
    ll sum = 0 ; 
    rep(i,n){
        if(i==idx) sum+=universalMn; 
        else sum+=grid[i][1] ; 
    }
    cout<<sum<<nl ; 
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}