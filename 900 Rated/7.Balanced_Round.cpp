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
    int n , k ; 
    cin>>n>>k ; 
    vector<int> v(n) ; 
    rep(i,n) cin>>v[i] ; 
    sort(all(v)) ; 
    int i=0 ; 
    int maxSize = 0 ; 
    int win = 1 ; 
    while(i<n){
        if(i<n-1 && v[i+1]-v[i]<=k){
            win++ ; 
        }
        else{
            maxSize = max(maxSize,win) ; 
            win = 1 ; 
        }
        i++ ; 
    }
    cout<<n-maxSize<<nl ; 
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}