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

#define ll long long 
#define all(v) v.begin(),v.end() 
#define rep(i,n) for(int i=0 ; i<n ; i++)
#define repl(i,n) for(ll i=0 ; i<n ; i++)
#define vi vector<int> 
#define vc vector<char> 
#define vll vector<long long> 
#define sp " "
#define nl endl 
ll gcd(ll a, ll b){ if (b == 0)return a ; return gcd(b, a % b);} 
void fastIO(){ios_base::sync_with_stdio(false);cin.tie(NULL) ; }
void display(vi& v){ int n = v.size() ; rep(i,n) cout<<v[i]<<sp;cout<<nl ;}
void displayll(vll& v){ll n=v.size();repl(i,n)cout<<v[i]<<sp;cout<<nl;}
 
bool isCoPrime(ll a,ll b){
    if(gcd(a,b)==1) return true ; 
    else return false ;
}
void solve(){
    ll n ; cin>>n ; 
    vll v(n) ; repl(i,n) cin>>v[i] ; 
    //Code
    unordered_map<ll,ll> map ; //no , idx
    repl(i,n){
        map[v[i]] = i ; 
    }
    ll ans = 0 ; 
    for(int i=1 ; i<=1000 ; i++){
        if(map.find(i)==map.end()) continue;
        for(int j=1 ; j<=1000 ; j++){
            if(map.find(j)==map.end()) continue;
            if(isCoPrime(i,j)) ans = max(ans,map[i]+map[j]+2) ; 
        }
    }
    ans==0 ? cout<<-1<<nl : cout<<ans<<nl ; 
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}