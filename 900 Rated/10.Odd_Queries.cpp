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
    ll n , q ; cin>>n>>q ;
    vector<long long> prefix(n) ;
    ll sum = 0 ; 
    rep(i,n){
        int x ; cin>>x ; 
        sum+=x ; 
        prefix[i] = sum ; 
    }
    vector<bool> queries(q) ; 
    for(int i=0 ; i<q ; i++){
        ll l , r , k ; 
        cin>>l>>r>>k ;
        ll prev = l==1 ? 0 : prefix[l-2] ; 
        long long s = prefix[n-1] - (prefix[r-1]- prev) ;
        int parity = k%2==1 ? ((l-r+1)%2==0 ? 0 : 1) : 0 ; 
        s+=parity ; 
        if(s%2==1) queries[i] = true ; 
        else queries[i] = false ; 

    }
    rep(i,q){
        (queries[i]==true) ? cout<<"YES"<<nl : cout<<"NO"<<nl ; 
    }
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}