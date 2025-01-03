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
 
void solve(){
    ll n ; cin>>n ; 
    string str ; cin>>str ; 
    //Code
    unordered_set<char> s1 , s2 ; 
    vector<ll> v1(n) , v2(n) ; 
    for(ll i=0 ; i<n ; i++){
        s1.insert(str[i]) ; 
        v1[i] = s1.size() ; 
    }
    for(ll i=n-1 ; i>=0 ; i--){
        s2.insert(str[i]) ; 
        v2[i] = s2.size() ; 
    }
    ll ans = 0 ; 
    for(ll i=0 ; i<n-1 ; i++){
        ans = max(ans,v1[i]+v2[i+1]) ; 
    }
    cout<<ans<<nl ; 
}

int main(){
    fastIO() ; 
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ;
    }
}