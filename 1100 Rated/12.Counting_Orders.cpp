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
#define MOD 1e9+7

void display(vll& v){
    ll n = v.size() ; 
    repl(i,n) cout<<v[i]<<sp;
    cout<<nl ;
}
 
void solve(){
    ll n ; cin>>n ; 
    vll a(n) ; repl(i,n) cin>>a[i] ; 
    vll b(n) ; repl(i,n) cin>>b[i] ;
    //Code
    sort(all(a)) , sort(all(b)) ; 
    ll i=0 , j=0 , cnt=0 ; // i is for a and j is for b
    vll noOfLarger(n) ; 
    while(i<n && j<n){
        while(i<n && a[i]<=b[j]){
            i++ ; 
        }
        noOfLarger[j] = n-i ; 
        j++ ; 
    }
    ll ans = 1 ; 
    for(ll i=n-1 ; i>=0 ; i--){
        ans*=(noOfLarger[i]-cnt) ; 
        ans = (ll)ans % (ll)(1e9+7) ; 
        cnt++ ; 
    }
    cout<<max((ll)0,ans)<<nl ;
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}