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
    ll n; cin>>n ; 
    vll v(n) ; repl(i,n) cin>>v[i] ; 
    //Code
    // v[n-1] can't be changed
    ll op = 0 ;
    for(ll i=n-2 ; i>=0 ; ){
        if(v[i]==v[n-1]){
            i-- ; 
        }
        else{
            ll len = n-i ; 
            i-=len-1 ; 
            op++ ; 
        }

    }
    cout<<op<<nl ; 
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}