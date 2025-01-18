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
void fastIO(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void display(vi& v){ int n = v.size() ; rep(i,n) cout<<v[i]<<sp;cout<<nl ;}
void displayll(vll& v){ll n=v.size();repl(i,n)cout<<v[i]<<sp;cout<<nl;}
 
void solve(){
    int n , q ; cin>>n>>q ; 
    vi v(n) ; rep(i,n) cin>>v[i] ; 
    vi t(q) ; rep(i,q) cin>>t[i] ; 
    //Code
    unordered_map<int,int> m ; 
    for(int i=0 ; i<n ; i++){
        if(m.find(v[i])==m.end()){
            m[v[i]] = i+1 ;  
        }
    }
    int cnt = 0 ; 
    vi ans(q) ; 
    for(int i=0 ; i<q ; i++){
        int currIdx = m[t[i]] ; 
        ans[i] = m[t[i]] ;  
        unordered_map<int,int> :: iterator it = m.begin() ; 
        for(;it!=m.end() ; it++){
            if(it->second<currIdx){
                it->second++ ; 
                it->second %=n+1 ; 
            }
        }
        m[t[i]] = 1 ; 
    }
    display(ans) ;
}

int main(){
    fastIO() ; 
    int t = 1; 
    while(t--){
        solve() ;
    }
}