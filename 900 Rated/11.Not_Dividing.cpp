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
    vector<ll> v(n) ; 
    rep(i,n) cin>>v[i] ; 
    //Code 
    for(int i=0 ; i<n-1 ; i++){
        if(v[i]==1) v[i]++ ; 
    }
    for(int i=0 ; i<n-1 ; i++){
        if(v[i+1]%v[i]==0){
            v[i+1]++ ; 
        }
    }
    rep(i,n){
        cout<<v[i]<<sp ; 
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