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
    int n ; cin>>n ; 
    vector<int> v(n) ; 
    rep(i,n) cin>>v[i] ;
    v.push_back(v[0])  ; 
    int mx = INT_MIN ; 
    rep(i,n){
        mx = max(mx,(-1)*(v[i+1]-v[i])) ; 
    }
    for(int i=1 ; i<n ; i++){
        mx = max(mx,v[i]-v[0]) ; 
    }
    for(int i=0 ; i<n-1 ; i++){
        mx = max(mx,v[n-1]-v[i]) ; 
    }
    cout<<mx<<nl ; 
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}