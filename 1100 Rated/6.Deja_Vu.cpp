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
#include<cmath>
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
void display(vll& v){
    ll n = v.size() ; 
    repl(i,n) cout<<v[i]<<sp;
    cout<<nl ;
}
 
void solve(){
    //Gand Faad Question , it takes me a lot to think its logic
    ll n , q ; cin>>n>>q ; 
    vll a(n) , x(q) ; rep(i,n) cin>>a[i] ; 
    repl(i,q) {
        int b ; cin>>b ; 
        x[i] = 1LL<<b ; 
    } 
    //Code
    unordered_set<ll> s ; 
    for(int i=0 ; i<q ; i++){
        if(s.find(x[i])!=s.end()) continue; 
        s.insert(x[i]) ; 
        for(int j=0 ; j<n ; j++){
            if(a[j]%x[i]==0){
                a[j]+=x[i]/2 ; 
            }
        }
    }
    display(a) ; 
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}