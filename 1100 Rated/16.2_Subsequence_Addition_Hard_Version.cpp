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
 
bool solve(){
    ll n ; cin>>n ; 
    vll v(n) ; repl(i,n) cin>>v[i] ; 
    //Code
    sort(all(v)) ; 
    if(v[0]!=1) return false ; 
    ll sum = 1 ; 
    for(ll i=1 ; i<n ; i++){
        if(v[i]>sum) return false ; 
        sum+=v[i] ; 
    }
    return true ; 
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        bool flag = solve() ;
        if(flag) cout<<"YES"<<nl ; 
        else cout<<"NO"<<nl ; 
    }
}