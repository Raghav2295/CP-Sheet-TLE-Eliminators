#include <iostream>
#include <vector> 
#include <algorithm>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<set>
#include<climits>
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
    int n ; cin>>n; 
    vll v(n) ; rep(i,n) cin>>v[i] ; 
    //Code
    ll gcd1 = 0 , gcd2 = 0 ; 
    for(int i=0 ; i<n ; i+=2) gcd1 = gcd(gcd1,v[i]) ; 
    for(int i=1 ; i<n ; i+=2) gcd2 = gcd(gcd2,v[i]) ; 
    bool ok = true ; 
    for(int i=0 ; i<n ; i+=2){
        if(v[i]%gcd2==0){
            ok = false ; 
            break ; 
        }
    }
    if(ok){
        cout<<gcd2<<nl ; 
        return ; 
    }
    ok = true ; 
    for(int i=1 ; i<n ; i+=2){
        if(v[i]%gcd1==0){
            ok = false ; 
            break ; 
        }
    }
    if(ok){
        cout<<gcd1<<nl ; 
        return ; 
    }
    cout<<0<<nl ; 
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}