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
    ll n ; cin>>n ; 
    vll v(n) ; 
    ll noOfneg = 0 ; 
    ll sum = 0 ; 
    ll mn = 1e9+1 ; 
    repl(i,n){
        cin>>v[i] ; 
        sum+=abs(v[i]) ; 
        if(v[i]<0) noOfneg++ ;
        mn = min(mn,abs(v[i])) ; 
    }
    //Code
    if(noOfneg%2==0) cout<<sum<<nl ; 
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