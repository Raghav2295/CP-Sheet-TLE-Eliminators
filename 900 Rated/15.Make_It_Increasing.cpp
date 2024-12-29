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
    int n ; cin>>n ; 
    vector<int> a(n) ; 
    rep(i,n) cin>>a[i] ; 
    //Code
    ll ans = 0 ; 
    for(int i=n-1 ; i>=1 ; i--){
        if(a[i]==0){
            cout<<-1<<nl ; 
            return ; 
        }
        while(a[i]<=a[i-1]){
            a[i-1] = a[i-1]/2 ; 
            ans++ ; 
        }
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