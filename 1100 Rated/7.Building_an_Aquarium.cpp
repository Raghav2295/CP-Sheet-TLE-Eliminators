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
    ll n , x ; cin>>n>>x ; 
    vll v(n) ; 
    repl(i,n){
        cin>>v[i] ; 
    }
    //Code
    ll low = 1 , high = 1e14 ; 
    ll mid = low + (high-low)/2 ; 
    while(low<high-1){
        mid = low + (high-low)/2 ; 
        ll sum = 0 ; 
        repl(i,n) sum += max((ll)0,mid-v[i]) ;
        if(sum>x){
            high = mid ; 
        }
        else low = mid ; 
    }
    cout<<low<<nl ;
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}